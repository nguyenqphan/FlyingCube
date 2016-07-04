using UnityEngine;
using System.Collections;

public class PanelController : MonoBehaviour {

	private UpdateScore updateScore;

	public GameObject mainPanel;
	public GameObject playButton;
	public GameObject refreshButton;
	public GameObject adsButton;
	public GameObject scorePanel;
	public GameObject gameTitleText;
	public GameObject liveScoreText;
	public GameObject doubleScoreButton;
	public GameObject shopPanel;
	public GameObject noAdsPanel;
	public GameObject gameTileText;
	public GameObject x2ScoreButton;
	public UIController uIscaling;
	public GameObject fastImage;

	void Awake()
	{
		updateScore = GameObject.Find("UI").GetComponent<UpdateScore>();
		uIscaling = adsButton.GetComponent<UIController>();

	}
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void HideMainPanel()
	{
		mainPanel.SetActive(false);
//		if (GameManager.Instance.AmountOfDiamond > 4) {
//			ShowX2DoubleButton ();
//		}
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

		if(GameManager.Instance.NumOfGame % 4 == 0)
		{
			adsButton.SetActive(true);
			uIscaling.StartScalling();
		}
		else{
			adsButton.SetActive(false);
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

	public void ShowScorePanel()
	{
		updateScore.DisplayFinalScore();						//update final scores before showing them.
		scorePanel.SetActive(true);
		liveScoreText.SetActive(false);
	}

	public void HideScorePanel()
	{
		scorePanel.SetActive(false);
		liveScoreText.SetActive(true);
	}

	public void ShowNoAdsPanel()
	{
		HideMainPanel();
		noAdsPanel.SetActive(true);
	}

	public void HideNoAdsPanel()
	{
		ShowMainPanel();
		noAdsPanel.SetActive(false);
	}

	public void ShowX2DoubleButton()
	{
		if (GameManager.Instance.AmountOfDiamond > 4) {
			x2ScoreButton.SetActive (true);
		}
	}

	public void HideX2DoubleButon()
	{
		x2ScoreButton.SetActive(false);
	}


	public void ShowOrHideFastImage()
	{
		if(GameManager.Instance.IsDouble){
			fastImage.SetActive(true);
		}else{
			fastImage.SetActive(false);
		}
	}
}
