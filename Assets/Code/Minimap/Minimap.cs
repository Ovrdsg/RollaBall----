
using UnityEngine;

public class Minimap : MonoBehaviour
{
    private Transform _player;
    private void Start()
    {
        _player = Camera.main.transform;
        transform.parent = null;
        transform.rotation = Quaternion.Euler(90.0f, 0 ,0);
        transform.position = _player.position + new Vector3(0, 5.0f, 0);

        var miniMapTexture = Resources.Load<RenderTexture>("Minimap/MiniMapTexture");
        GetComponent<Camera>().targetTexture = miniMapTexture;       
    }

    private void LateUpdate()
    {
        var newPosition = _player.position;
        newPosition.y = transform.position.y;
        transform.position = newPosition;
        transform.rotation = Quaternion.Euler(90, _player.eulerAngles.y, 0);
    }
}
