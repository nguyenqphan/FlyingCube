using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.Audio;

public class SwapImage : MonoBehaviour {

	public GameObject imageSwapButton;
	public Sprite musicOnImage;
	public Sprite musicOffImage;
	private Image image;
	private SoundManager soundManager;

	private bool isMusicOn = true;

	void Awake()
	{
		image = imageSwapButton.GetComponent<Image>();
		soundManager = GameObject.FindWithTag("GameManager").GetComponent<SoundManager>();
	}

	public void ToggleMusic()
	{
//		Debug.Log("Toggle Me");

		isMusicOn = !isMusicOn;
		if(isMusicOn){
			image.sprite = musicOnImage;
			if (imageSwapButton.CompareTag("MusicButton")) {
				soundManager.PlayMusic();
			}
			else{
				soundManager.setTapLevel(1f);
			}
		}
		else{
			image.sprite = musicOffImage;
			if (imageSwapButton.CompareTag("MusicButton")) {
				soundManager.PauseMusic();
			}else{
				soundManager.setTapLevel(0f);
			}
		}


	}
}
