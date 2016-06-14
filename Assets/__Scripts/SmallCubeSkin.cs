using UnityEngine;
using System.Collections;

public class SmallCubeSkin : MonoBehaviour {

	public Color colorStart = Color.blue;
	public Color colorEnd = Color.cyan;
	public float duration = 1.0F;
	public Renderer rend;
	void Start() {
		rend = GetComponent<Renderer>();
	}
	void Update() {
		float lerp = Mathf.PingPong(Time.time, duration) / duration;
		//		rend.material.color = Color.Lerp(colorStart, colorEnd, lerp);
		rend.sharedMaterial.color = Color.Lerp(colorStart, colorEnd, lerp);	
	}
}
