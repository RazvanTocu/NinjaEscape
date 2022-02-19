using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;

public class PlayerMovement : MonoBehaviour
{
    // nuova voce script per regolazione velocità Player in Unity

    [SerializeField] private float speed;
    [SerializeField] private float jumpPower;
    [SerializeField] private LayerMask groundLayer;
    [SerializeField] private LayerMask wallLayer;
    private Rigidbody2D body;
    private Animator anim;
    private BoxCollider2D boxCollider;
    private float wallJumpCooldown;
    private float horizontalInput;

    [Header ("SFX")]
    [SerializeField] private AudioClip jumpSound;
    [SerializeField] private AudioClip runSound;

    public GameManager theGM;

    private void Awake()

    //Riferimenti alle animazioni e Rigidbody2D 
    {
        body = GetComponent<Rigidbody2D>();
        anim = GetComponent<Animator>();
        boxCollider = GetComponent<BoxCollider2D>();
    }


    private void Update()
    {
        ///// SCRIPT MOVIMENTO PLAYER /////

        //horizontalInput = Input.GetAxis("Horizontal"); //COMANDI TEST MOVIMENTO CON TASTIERA PC

        horizontalInput = CrossPlatformInputManager.GetAxis("Horizontal"); //UTILIZZARE QUESTO PER GIOCARE AL TELEFONO

        // inserimento "flip" del Player quando cambia direzione

        if (horizontalInput > 0.01f)
            transform.localScale = Vector3.one;
        else
            if (horizontalInput < -0.01f)
            transform.localScale = new Vector3(-1, 1, 1);

        anim.SetBool("Run", horizontalInput != 0);
        anim.SetBool("grounded", isGrounded());

        // Salto sul muro e ancoraggio ad esso

        if (wallJumpCooldown > 0.2f)
        {
            body.velocity = new Vector2(horizontalInput * speed, body.velocity.y);

            if (onWall() && !isGrounded())      //staccaggio dal muro
            {
                body.gravityScale = 0;
                body.velocity = Vector2.zero;
            }
            else
                body.gravityScale = 7;

            if(CrossPlatformInputManager.GetButtonDown("Jump"))
            {
                Jump();

                if ((CrossPlatformInputManager.GetButtonDown("Jump")) && isGrounded())
                    SoundManager.instance.PlaySound(jumpSound);
            }
            //  if (CrossPlatformInputManager.GetButtonDown("Jump")) UTILIZZARE PER SALTARE BOTTONE TELEFONO
    }
        else
            wallJumpCooldown += Time.deltaTime;
    }
    // JUMP 
    private void Jump()
    {
        if (isGrounded())
        {
            body.velocity = new Vector2(body.velocity.x, jumpPower);
            anim.SetTrigger("jump");
        }
        else if(onWall() && !isGrounded())
        {
            if(horizontalInput == 0)
            {
                body.velocity = new Vector2(-Mathf.Sign(transform.localScale.x) * 10, 0);
                transform.localScale = new Vector3(-Mathf.Sign(transform.localScale.x), transform.localScale.y, transform.localScale.z);  //Flip del giocatore durante il salto su lato opposto
            }
            else
                body.velocity = new Vector2(-Mathf.Sign(transform.localScale.x) * 3, 6);

            wallJumpCooldown = 0;
        }
    }

    // Salto normale in contatto con oggetti
    private bool isGrounded()
    {
        RaycastHit2D raycastHit = Physics2D.BoxCast(boxCollider.bounds.center, boxCollider.bounds.size, 0, Vector2.down, 0.1f, groundLayer);
        return raycastHit.collider != null; ;
    }

    private bool onWall()
    {
        RaycastHit2D raycastHit = Physics2D.BoxCast(boxCollider.bounds.center, boxCollider.bounds.size, 0, new Vector2(transform.localScale.x, 0), 0.1f, wallLayer);
        return raycastHit.collider != null; ;
    }
    public bool canAttack()
    {
        return horizontalInput == 0 && isGrounded() && !onWall();
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
         if(other.gameObject.tag == "Spikes")
        {
            Debug.Log("ouch!");
        } 
    }
}
