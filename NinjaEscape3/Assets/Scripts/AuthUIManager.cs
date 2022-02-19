using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class AuthUIManager : MonoBehaviour
{
    public static AuthUIManager instance;

    [Header("References")]
    [SerializeField]
    private GameObject checkingForAccountUI;
    [SerializeField]
    private GameObject loginUI;
    [SerializeField]
    private GameObject registerUI;
    [SerializeField]
    private GameObject verifyEmailUI;
    [SerializeField]
    private TMP_Text verifyEmailText;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        else if (instance != this)
        {
            Destroy(gameObject);
        }

    }

    private void ClearUI()
    {
        loginUI.SetActive(false);
        registerUI.SetActive(false);
        FirebaseManager.instance.ClearOutputs();
        checkingForAccountUI.SetActive(false);
        verifyEmailUI.SetActive(false);
    }

    public void LoginScreen()
    {
        ClearUI();
        loginUI.SetActive(true);
    }

    public void RegisterScreen()
    {
        ClearUI();
        registerUI.SetActive(true);
    }

    public void AwaitVerification(bool _emailSent, string _email, string _output)
    {
        ClearUI();
        verifyEmailUI.SetActive(true);
        if (_emailSent)
        {
            verifyEmailText.text = $"Sent Email! \n Please Verify {_email}";
        }
        else
        {
            verifyEmailText.text = $"Email Not Sent: {_output}\n Please Verify {_email}";
        }
    }
}
