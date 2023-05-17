﻿// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.﻿

using UnityEditor;

namespace Microsoft.MixedReality.GraphicsTools.Editor
{
    /// <summary>
    /// Adds a shortcut to create a configured  game object and component from the game object context menu.
    /// </summary>
    [CustomEditor(typeof(CanvasElementMesh))]
    public class CanvasElementMeshInspector : UnityEditor.Editor
    {
        [MenuItem("GameObject/UI/Mesh - Graphics Tools")]
        private static void CreateCanvasElement(MenuCommand menuCommand)
        {
            InspectorUtilities.CreateGameObjectFromMenu<CanvasElementMesh>(menuCommand);
        }
    }
}
