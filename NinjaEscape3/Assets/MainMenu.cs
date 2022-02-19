using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour

{
    [SerializeField] private AudioClip menuMusic;
    public string lvlToLoad;
    public int defaultLives;

    private void Start()
    {
        SoundManager.instance.PlaySound(menuMusic);
        PlayerPrefs.SetInt("CurrentHealth", defaultLives);
    }

    public void StartGame()
    {
        SceneManager.LoadScene(lvlToLoad);
    }

    public void ExitButton()
    {
        Application.Quit();
        Debug.Log("Game closed");
    }
}
