using UnityEngine;
using System.Collections;

public class CameraMove : MonoBehaviour {

	private Transform thisTransform;
	[HideInInspector]
	public bool isPlaying = true;
	private  float speed = 5f;

	void Awake()
	{
		thisTransform = GetComponent<Transform>();
	}

//	void Start()
//	{
//		StartCoroutine(GoForward());
//	}
//
	public void GoingForward()
	{
		StartCoroutine(GoForward());
	}

	IEnumerator GoForward()
	{
		while(isPlaying)
		{
			thisTransform.Translate(Vector3.right * Time.deltaTime * speed, Space.World);
			yield return 0;
		}
	}
}
 