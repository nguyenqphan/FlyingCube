using UnityEngine;
using System.Collections;

public class SmallCubeSkin : MonoBehaviour {

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

}
