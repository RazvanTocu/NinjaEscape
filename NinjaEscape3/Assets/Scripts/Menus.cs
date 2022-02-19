using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Menus : MonoBehaviour
{
    public void Replay()
    {
        FindObjectOfType<GameManager>().Reset();
    }

    public void BackMainMenu()
    {
        SceneManager.LoadScene("MainMenu");
    }
}
