using UnityEngine;
using System.Collections;

public class CubeSkin : MonoBehaviour {

	private Renderer render;
	public Material[] materials;
//	public Material[] materials;

	void Awake()
	{
		render = GetComponent<Renderer>(); 
	}

	void Start()
	{
	}

	public void ChooseColor(int matIndex)
	{
//		Debug.Log(colorNum);
		render.sharedMaterial = materials[matIndex];
	}


//	public Color colorStart = Color.black;
//	public Color colorEnd = Color.white;
//	public float duration = 1.0F;
//	public Renderer rend;
//	void Start() {
//		rend = GetComponent<Renderer>();
//	}
//	void Update() {
//		float lerp = Mathf.PingPong(Time.time, duration) / duration;
//		//		rend.material.color = Color.Lerp(colorStart, colorEnd, lerp);
//		rend.sharedMaterial.color = Color.Lerp(colorStart, colorEnd, lerp);	
//	}
}
