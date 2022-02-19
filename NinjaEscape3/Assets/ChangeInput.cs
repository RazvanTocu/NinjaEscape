using System.Collections;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine;

public class ChangeInput : MonoBehaviour
{
    EventSystem system;
    public Selectable firstInput;
    public Button submitButton;

    // Start is called before the first frame update
    void Start()
    {
        system = EventSystem.current;
        firstInput.Select();
    }

    // Update is called once per frame
    void Update()
    {
       if (Input.GetKeyDown(KeyCode.Tab) && Input.GetKey(KeyCode.LeftShift))  // Inserito comando aggiuntivo per spostarsi comodamente nel menu login ( FUNZIONE PER PC )
       {
            Selectable previous = system.currentSelectedGameObject.GetComponent<Selectable>().FindSelectableOnUp();
            if (previous != null)
            {
                previous.Select();
            }
        }
        else
            
            if (Input.GetKeyDown(KeyCode.Tab))  // Inserito comando aggiuntivo per spostarsi comodamente nel menu login ( FUNZIONE PER PC )
            {
                Selectable next = system.currentSelectedGameObject.GetComponent<Selectable>().FindSelectableOnDown();
                if (next != null)
                {
                next.Select();
                }
        }
        else
            if (Input.GetKeyDown(KeyCode.Return))
        {
            submitButton.onClick.Invoke();
            Debug.Log("Button pressed!");
        }
    }
}
