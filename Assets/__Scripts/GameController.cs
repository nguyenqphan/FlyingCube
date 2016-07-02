using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class GameController : MonoBehaviour {

	private PanelController panelController;
	private CameraMove cameraMove;
	private UpdateScore updateScore;

	void Awake()
	{
		panelController = GetComponent<PanelController>();
		cameraMove = GameObject.FindWithTag("MainCamera").GetComponent<CameraMove>();
		updateScore = GameObject.FindWithTag("UI").GetComponent<UpdateScore>();
	}
	// Use this for initialization
	void Start () {

	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void StartGame()
	{
		GameManager.Instance.IsCameraMoved = true;
		GameManager.Instance.IsStartButtonPressed = true;
		cameraMove.GoingForward();
		panelController.HideMainPanel();
		updateScore.IncreaseScore();
	}

	public void RefreshGame()
	{
		SceneManager.LoadScene(0);
		GameManager.Instance.Score = 0;
//		cameraMove.isPlaying = true;
//		Debug.Log(cameraMove.isPlaying);
//		cameraMove.GoingForward();
							//Enable Camera to move
		panelController.HideMainPanel();
		updateScore.ChangeLiveScore();
	}
}
