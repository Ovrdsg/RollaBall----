
using UnityEngine;

namespace RollaBall
{
    public sealed class ExampleRaycast : MonoBehaviour
    {

        
        private void Start()
        {
            
            if (Physics.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out var hit, maxDistance: 100f))
            {
                Debug.Log("dadada");
            }

           
        }
    }
}
