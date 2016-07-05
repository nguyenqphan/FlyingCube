using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class GameController : MonoBehaviour {

	private PanelController panelController;
	private CameraMove cameraMove;
	private UpdateScore updateScore;
	private Spawner spawner;
	private SoundManager soundManager;
	void Awake()
	{
		panelController = GetComponent<PanelController>();
		cameraMove = GameObject.FindWithTag("MainCamera").GetComponent<CameraMove>();
		updateScore = GameObject.FindWithTag("UI").GetComponent<UpdateScore>();
		soundManager = GameObject.FindWithTag("GameManager").GetComponent<SoundManager>();;


	}
	// Use this for initialization
	void Start () {

	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void StartGame()
	{
		soundManager.PlayButtonClickClip();
		panelController.gameTileText.SetActive(false);
		panelController.ShowX2DoubleButton();
		GameManager.Instance.IsCameraMoved = true;
		GameManager.Instance.IsStartButtonPressed = true;
		GameManager.Instance.IsStarted = true;
//		cameraMove.GoingForward();
		panelController.HideMainPanel();
		panelController.HideScorePanel();
	}

	public void RefreshGame()
	{
		soundManager.PlayButtonClickClip();
		panelController.gameTileText.SetActive(false);
//		SceneManager.LoadScene(0);
		spawner = GameObject.FindWithTag("Spawner").GetComponent<Spawner>();
		spawner.StartClearScene();

		GameManager.Instance.Score = 0;
		GameManager.Instance.IsCameraMoved = true;
//		cameraMove.isPlaying = true;
//		Debug.Log(cameraMove.isPlaying);
//		cameraMove.GoingForward();
							//Enable Camera to move
		panelController.HideMainPanel();
		panelController.HideScorePanel();
		updateScore.ChangeLiveScore();


	}
}
