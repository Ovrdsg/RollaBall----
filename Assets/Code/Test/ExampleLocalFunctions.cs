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
                Debug.Log("����������� ��������� ������ � 18 ���");
            }
            else
            {
                Debug.Log("�� ����������������!");
            }

            bool IsAdult(string value)
            {
                if (!Int32.TryParse(value, out var age)) throw new Exception(@"������� ������ �����������");
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
