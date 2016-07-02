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
	public GameObject shopPanel;

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
//		playButton.SetActive(false);
//		refreshButton.SetActive(true);
		if(GameManager.Instance.IsStartButtonPressed)
		{
			playButton.SetActive(false);
			refreshButton.SetActive(true);
		}else{
			playButton.SetActive(true);
			refreshButton.SetActive(false);
		}
	}

	public void ShowShopPanel()
	{
		HideMainPanel();
		shopPanel.SetActive(true);
	}

	public void HideShopPanel()
	{
		shopPanel.SetActive(false);
		ShowMainPanel();
	}
}
