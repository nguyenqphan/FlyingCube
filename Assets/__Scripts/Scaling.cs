using UnityEngine;
using System.Collections;

public class Scaling : MonoBehaviour {

	private Transform trans;

	private float startScale;
	private float newScale;
	private float scale;
	private float scalingSpeed;
	private bool isBigger;

	// Use this for initialization

	void Awake()
	{
		trans = GetComponent<Transform>();
	}
	void Start () {
		scale = 0.3f;
		scalingSpeed = 1f;
		isBigger = true;
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
}
