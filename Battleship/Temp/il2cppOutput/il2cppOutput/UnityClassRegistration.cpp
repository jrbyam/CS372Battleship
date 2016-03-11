struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_ParticlesLegacy();
	RegisterModule_ParticlesLegacy();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 85 classes
	//0. AssetBundle
	void RegisterClass_AssetBundle();
	RegisterClass_AssetBundle();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//4. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//5. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//6. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//7. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//8. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//9. Skybox
	void RegisterClass_Skybox();
	RegisterClass_Skybox();

	//10. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//11. LineRenderer
	void RegisterClass_LineRenderer();
	RegisterClass_LineRenderer();

	//12. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//13. GUITexture
	void RegisterClass_GUITexture();
	RegisterClass_GUITexture();

	//14. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//15. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//16. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//17. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//18. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//19. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//20. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//21. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//22. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//23. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//24. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//25. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//26. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//27. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//28. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//29. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//30. ParticleEmitter
	void RegisterClass_ParticleEmitter();
	RegisterClass_ParticleEmitter();

	//31. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//32. Joint
	void RegisterClass_Joint();
	RegisterClass_Joint();

	//33. SpringJoint
	void RegisterClass_SpringJoint();
	RegisterClass_SpringJoint();

	//34. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//35. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//36. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//37. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//38. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//39. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//40. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//41. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//42. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//43. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//44. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//45. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//46. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//47. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//48. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//49. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//50. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//51. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//52. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//53. PhysicMaterial
	void RegisterClass_PhysicMaterial();
	RegisterClass_PhysicMaterial();

	//54. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//55. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//56. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//57. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//58. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//59. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//60. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//61. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//62. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//63. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//64. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//65. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//66. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//67. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//68. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//69. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//70. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//71. Avatar
	void RegisterClass_Avatar();
	RegisterClass_Avatar();

	//72. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//73. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//74. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//75. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//76. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//77. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//78. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//79. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//80. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//81. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//82. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//83. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//84. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
