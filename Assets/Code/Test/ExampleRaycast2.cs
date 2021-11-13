
using UnityEngine;

namespace RollaBall
{
    public class ExampleRaycast2 : MonoBehaviour
    {

        private void Start()
        {
            Example(out var x, out var y);
            Example(out _, out var y2);
            Example(out var x2, out _);
            Example(out _, out _);
        }

        private void Example(out int x, out int y)
        {
            x = 10;
            y = 20;

            Debug.Log($"{x} | {y}");
        }
    }
}
