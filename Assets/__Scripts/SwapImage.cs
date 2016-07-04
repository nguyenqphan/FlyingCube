using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class SwapImage : MonoBehaviour {

	public GameObject imageSwapteButton;
	public Sprite musicOnImage;
	public Sprite musicOffImage;
	private Image image;

	private bool isMusicOn = true;

	void Awake()
	{
		
	}

	void Start()
	{
//		image.sprite = musicOnImage;
	}
	public void ToggleMusic()
	{
		Debug.Log("Toggle Me");
		image = imageSwapteButton.GetComponent<Image>();
		isMusicOn = !isMusicOn;
		if(isMusicOn){
			image.sprite = musicOnImage;
		}
		else{
			image.sprite = musicOffImage;
		}


	}
}
