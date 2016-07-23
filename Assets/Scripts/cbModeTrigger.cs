using UnityEngine;
using System.Collections;

public class cbModeTrigger : MonoBehaviour {

	public void cbMode () {
		if (GvrViewer.Instance.VRModeEnabled == true) {
			GvrViewer.Instance.VRModeEnabled = false;
		} else {
			GvrViewer.Instance.VRModeEnabled = true;
		}
	}


}
