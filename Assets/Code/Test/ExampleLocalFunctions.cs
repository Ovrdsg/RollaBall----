using System;
using UnityEngine;


namespace RollaBall
{
    public sealed class ExampleLocalFunctions : MonoBehaviour
    {

        private void Start()
        {
            GetAge();
        }

        private void GetAge()
        {
            var ageInput = "22";

            if (!IsAdult(ageInput))
            {
                Debug.Log("Регистрация разрешена только с 18 лет");
            }
            else
            {
                Debug.Log("Вы зарегестрированы!");
            }

            bool IsAdult(string value)
            {
                if (!Int32.TryParse(value, out var age)) throw new Exception(@"Возраст введен некорректно");
                if (age > 18)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }

        }
    }
}
