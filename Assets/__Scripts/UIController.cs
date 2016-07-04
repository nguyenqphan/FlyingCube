using UnityEngine;
using System.Collections;

public class UIController : MonoBehaviour {

	private Transform trans;

	private bool isClicked = false;
	private float startScale;
	private float newScale;
	private float scale;
	private float scalingSpeed;
	private bool isBigger;

	private float startPosX;
	private float startPosY;

	private float curPosX;
	private float curPosY;
	private float distance = 1f;
	private float movingSpeed = 2000f;
	private PanelController panelController;
	private UpdateScore updateScore;

	// Use this for initialization

	void Awake()
	{
		trans = GetComponent<Transform>();
		panelController = GameObject.FindWithTag("UI").GetComponent<PanelController>();
		updateScore = GameObject.FindWithTag("UI").GetComponent<UpdateScore>();
	}
	void Start () {
		scale = 0.1f;
		scalingSpeed = .3f;
		isBigger = true;
		startPosX = 0;
		startPosY = trans.localPosition.y;
//		Debug.Log("Restart");
	}

	void FixedUpdate()
	{
		if(curPosY < distance && GameManager.Instance.IsSlowScore && !GameManager.Instance.IsDouble)
		{
//			Debug.Log("move down");
			GameManager.Instance.IsSlowScore = false;
			StartFastDownward();
		}
	}

	public void StartScalling()
	{
		StartCoroutine(pulse());
	}

	private IEnumerator pulse()
	{
		startScale = transform.localScale.x;

		while(true)
		{
			newScale = trans.localScale.x + (isBigger? 1:-1) * scalingSpeed * Time.deltaTime;

			if(newScale > startScale + scale)
			{
				newScale = startScale + scale;
				isBigger = false;
			}else if(newScale < startScale){
				newScale = startScale;
				isBigger = true;
			}

			trans.localScale = new Vector3(newScale, newScale, newScale);

			yield return 0;
		}
	}

	public void ForwardFast()
	{
//		Debug.Log("Im in FarwardFast");
//		StopAllCoroutines();
		if (!isClicked) {
			isClicked = true;
			GameManager.Instance.IsDouble = true;
			GameManager.Instance.AmountOfDiamond -= 5;
			updateScore.ChangeAmountOfDiamond ();
			panelController.ShowOrHideFastImage ();
			StartCoroutine (FastForWard ());
		}
	}

	private IEnumerator FastForWard()
	{
		while(curPosX < distance && GameManager.Instance.IsDouble)
		{
			trans.Translate(Vector3.right * Time.deltaTime * movingSpeed, Space.Self);
			curPosX+= Time.deltaTime;
			yield return 0;
		}	

		curPosX = 0;
		isClicked = false;
		this.gameObject.SetActive(false);
		trans.localPosition = new Vector3(startPosX, trans.localPosition.y,trans.localPosition.z);

	}

	public void StartFastDownward()
	{
//		StopAllCoroutines();
		StartCoroutine(FastDownward());
	}

	private IEnumerator FastDownward()
	{
		yield return new WaitForSeconds(.5f);
		while(curPosY < distance && !GameManager.Instance.IsDouble)
		{
			trans.Translate(Vector3.down * Time.deltaTime * movingSpeed, Space.Self);
			curPosY+= Time.deltaTime;
			yield return 0;
		}

//		GameManager.Instance.IsSlowScore = false;
		curPosY  = 0;
		yield return new WaitForSeconds(1f);
		this.gameObject.SetActive(false);
		trans.localPosition = new Vector3(startPosX, startPosY, trans.localPosition.z);
	}
}
