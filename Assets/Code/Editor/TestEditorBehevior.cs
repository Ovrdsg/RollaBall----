using System.Threading;
#if UNITY_EDITOR
using UnityEditor;
#endif
using UnityEngine;

namespace RollaBall
{
    public sealed class TestEditorBehevior : MonoBehaviour
    {
        public float Count = 10;
        public int Step = 2;

        private void Start()
        {
#if UNITY_EDITOR

            for(var i = 0; i < Count; i++)
            {
                EditorUtility.DisplayProgressBar("Loading", $"Progress : {i}", i / Count);
                Thread.Sleep(Step * 5);
            }

            EditorUtility.ClearProgressBar();
            var isPressed = EditorUtility.DisplayDialog("Вопрос", @"Вы уверены что хотите поиграть ?", "Да", "Нет");
            if(isPressed)
            {
                EditorApplication.isPaused = true;
            }
           

#endif
        }
    }
}
