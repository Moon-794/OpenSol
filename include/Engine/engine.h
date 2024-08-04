#include "AssetImporter/Shader.h"
#include "AssetImporter/Model.h"
#include "ECS/Scene.h"

#include "GameTime/GameTime.h"

#include "Components/MeshRenderer.h"
#include "Components/PlayerMove.h"

#include <iostream>
#include "glad/glad.h"
#include <GLFW/glfw3.h>
#include <chrono>
#include <memory>
#include <typeinfo>
#include <filesystem>

class engine
{
public:
    int windowWidth;
    int windowHeight;
    
    std::shared_ptr<GLFWwindow> window;
    std::shared_ptr<Scene> currentScene;
    std::shared_ptr<UE::GameTime> gameTime;

    void Init(int width, int height);
    void Tick();
    void Render();
    void UpdateScene();

private:
    std::shared_ptr<GLFWwindow> CreateWindow(int screenWidth, int screenHeight, std::string windowName);
};
