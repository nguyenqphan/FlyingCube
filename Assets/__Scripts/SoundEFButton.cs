using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.Audio;

public class SoundEFButton : MonoBehaviour {

	public GameObject imageSwapButton;
	public Sprite soundOnImage;
	public Sprite soundOffImage;
	private Image image;
	private SoundManager soundManager;

	void Awake()
	{
		image = imageSwapButton.GetComponent<Image>();
		soundManager = GameObject.FindWithTag("GameManager").GetComponent<SoundManager>();
	}

	public void ToggleSound()
	{
		GameManager.Instance.IsEffectON = !GameManager.Instance.IsEffectON;
		if(GameManager.Instance.IsEffectON){
			image.sprite = soundOnImage;
		
		}
		else{
			image.sprite = soundOffImage;
		}


	}
}
