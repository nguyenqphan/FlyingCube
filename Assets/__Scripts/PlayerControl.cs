using UnityEngine;
using System.Collections;

public class PlayerControl : MonoBehaviour {

	public Transform thisTransform;
	private bool isPlaying = true;
	private  float speed = 3f;

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
