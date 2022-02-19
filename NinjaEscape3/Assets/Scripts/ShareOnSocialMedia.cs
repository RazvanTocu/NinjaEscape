using System;
using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using System.IO;

public class ShareOnSocialMedia : MonoBehaviour
{
    [SerializeField] GameObject Panel_share;
    [SerializeField] Text txtPanelScore;
    [SerializeField] Text txtHomeScore;
    [SerializeField] Text txtDate;

    public void ShareScore()
    {
        txtPanelScore.text = txtHomeScore.text;
        DateTime dt = DateTime.Now;

        txtDate.text = string.Format("{0}/{1}/{2}", dt.Month, dt.Day, dt.Year);

        Panel_share.SetActive(true);
        StartCoroutine("TakeScreenShotAndShare");
    }

    IEnumerator TakeScreenShotAndShare()
    {
        yield return new WaitForEndOfFrame();

        Texture2D tx = new Texture2D(Screen.width, Screen.height, TextureFormat.RGB24, false);
        tx.ReadPixels(new Rect(0, 0, Screen.width, Screen.height), 0, 0);
        tx.Apply();

        string path = Path.Combine(Application.temporaryCachePath, "sharedImage.png");
        File.WriteAllBytes(path, tx.EncodeToPNG());

        Destroy(tx);

        new NativeShare()
            .AddFile(path)
            .SetSubject("This is my score")
            .SetText("share your score with your friends")
            .Share();

        Panel_share.SetActive(false);
    }
}
