using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameOverScreen : MonoBehaviour
{
    [SerializeField] private AudioClip winSound;
    // Start is called before the first frame update
    void Start()
    {
        SoundManager.instance.PlaySound(winSound);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
