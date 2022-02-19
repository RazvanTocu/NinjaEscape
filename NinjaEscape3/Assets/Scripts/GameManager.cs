using System;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    [Header("Player")]
    public PlayerMovement thePlayer;
    private Vector2 playerStart;

    [Header("Menus")]
    public GameObject victoryScreen;
    public GameObject gameOverScreen;

    [Header("Timer")]
    [SerializeField] private Text timer;
    [SerializeField] private Text finishTimer;
    [SerializeField] private Text loseTimer;
    private float currentTime;
    private bool gameRunning = true;

    private void Start()
    {
        playerStart = thePlayer.transform.position;
        ResetTimer();
    }

    private void Update()
    {
        if (!gameRunning) return;

        currentTime += Time.deltaTime;
        timer.text = "TIME: " + FormatTime(currentTime);
    }

    public string FormatTime(float _time)
    {
        TimeSpan totalTime = TimeSpan.FromSeconds(_time);
        return totalTime.ToString("mm':'ss");
    }
    public void Victory()
    {
        victoryScreen.SetActive(true);
        thePlayer.gameObject.SetActive(false);
        //GameObject.Find("Player").SendMessage("Finnish");

        gameRunning = false;
        timer.gameObject.SetActive(false);
        finishTimer.text = "TIME: " + FormatTime(currentTime);
    }

    public void GameOver()
    {
        gameOverScreen.SetActive(true);
        loseTimer.text = "TIME: " + FormatTime(currentTime);

        //Deactivate and stop timer
        gameRunning = false;
        timer.gameObject.SetActive(false);
    }

    public void Reset()
    {
        victoryScreen.SetActive(false);
        gameOverScreen.SetActive(false);
        thePlayer.gameObject.SetActive(true);
        thePlayer.transform.position = playerStart;
        thePlayer.GetComponent<Health>().ResetPlayer();

        ResetTimer();
    }
    private void ResetTimer()
    {
        //Reactivate & reset timer
        currentTime = 0;
        gameRunning = true;
        timer.gameObject.SetActive(true);
        timer.color = Color.white;
    }

    public static GameManager instance;

    private void Awake()
    {
        if(instance == null)
        {
            instance = this;
        }
        else if(instance != this)
        {
            Destroy(gameObject);
        }
    }

    public void ChangeScene(int _sceneIndex)
    {
        SceneManager.LoadSceneAsync(_sceneIndex);
    }
}