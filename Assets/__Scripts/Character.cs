using UnityEngine;
using System.Collections;
using UnityEngine.UI;

[CreateAssetMenu()]
public class Character: ScriptableObject {

	public string nameOfChar = "DefaultCharacter";
	public int cost;
	public bool isActive;
	public bool isUnlocked;
//	public GameObject lockImage;
	public Image lockImage;
	public GameObject checkImage;
}
