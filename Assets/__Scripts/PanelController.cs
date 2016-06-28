using UnityEngine;
using System.Collections;

public class PanelController : MonoBehaviour {

	public GameObject mainPanel;
	public GameObject playButton;
	public GameObject refreshButton;
	public GameObject adsButton;
	public GameObject scorePanel;
	public GameObject gameTitleText;
	public GameObject liveScoreText;
	public GameObject doubleScoreButton;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void HideMainPanel()
	{
		mainPanel.SetActive(false);
	}

	public void ShowMainPanel()
	{
		mainPanel.SetActive(true);
		playButton.SetActive(false);
		refreshButton.SetActive(true);
	}
}
