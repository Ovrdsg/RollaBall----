using System;
using UnityEngine;

public sealed class ExampleChecked : MonoBehaviour
{
    private void Start()
    {
        int a = 150;
        int b = 50;

        try
        {
            byte result = checked((byte)(a + b));
            Debug.Log(result);
        }

        catch(Exception exeption)
        {
            Debug.Log(exeption.Message);
        }
    }
}
