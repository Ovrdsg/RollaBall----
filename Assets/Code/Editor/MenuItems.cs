using UnityEditor;

namespace RollaBall
{
    public class MenuItems
    {
        [MenuItem("GeekBrains/ ����� ���� � 1")]
        private static void MenuOption()
        {
            EditorWindow.GetWindow(typeof(MyWindow), false, "Geekbrains");
        }

        [MenuItem("GeekBrains / ����� ���� � 2 %#y ")]
        private static void NewMenuOption()
        {

        }

        [MenuItem("GeekBrains / ����� ���� �3 %#� ")]
        private static void SuperAwesomeVoid()
        {

        }

        [MenuItem("Assets / AwesomeAsset %F1")]

        private static void AssetVoid()
        {

        }

    }
}
