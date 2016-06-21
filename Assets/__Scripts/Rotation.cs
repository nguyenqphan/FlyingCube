using UnityEngine;
using System.Collections;

public class Rotation : MonoBehaviour {

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
			trans.Rotate(-trans.up, 360 * .3f * Time.deltaTime, Space.Self);
			yield return 0;
		}
	}
}
