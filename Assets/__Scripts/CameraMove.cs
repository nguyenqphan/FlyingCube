using UnityEngine;
using System.Collections;

public class CameraMove : MonoBehaviour {

	private Transform thisTransform;
	private bool isPlaying = true;
	private  float speed = 5f;

	void Awake()
	{
		thisTransform = GetComponent<Transform>();
	}

	// Use this for initialization
	void Start () {
		StartCoroutine(GoForward());
	}
	
	// Update is called once per frame
	void Update () {
	
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
