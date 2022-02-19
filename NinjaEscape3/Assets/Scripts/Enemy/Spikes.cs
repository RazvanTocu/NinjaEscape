using UnityEngine;

public class Spikes : MonoBehaviour
{
    private Rigidbody2D body;

    private void Awake()
    {
        body = GetComponent<Rigidbody2D>();
        body.gravityScale = 0;
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "Player")
            body.gravityScale = 4;
    }
    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.transform.tag == "Player")
        {
            collision.transform.GetComponent<Health>()?.TakeDamage(1);
            gameObject.SetActive(false);
        }
        else if (collision.transform.tag == "Ground")
        {
            gameObject.SetActive(false);
        }
    }
}