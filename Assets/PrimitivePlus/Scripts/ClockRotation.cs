using UnityEngine;
using System.Collections;

public class ClockRotation : MonoBehaviour {

	private Transform trans;

	void Awake(){
		trans = GetComponent<Transform>();
	}

	// Use this for initialization
	void Start () {
		StartCoroutine(Rotating());
	}

	IEnumerator Rotating(){
		while(true)
		{
			trans.Rotate(-trans.forward, 360 * .1f * Time.deltaTime, Space.Self);
			yield return 0;
		}
	}
}
