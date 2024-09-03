#include <iostream>
#include "Engine/Engine.h"

int main(int argc, char** args)
{
    engine e;
    e.Init(800, 600);

    GameObject* camera = new GameObject(e.currentScene);
    GameObject* earth = new GameObject(e.currentScene, "Level");

    camera->addComponent<PlayerMove>(e.window, e.gameTime);
    e.currentScene->camera = camera;

    Shader* mapShader = new Shader("Shaders/Basic/vertex.vs", "Shaders/Basic/fragment.fs");
    Model planetModel("Models/Planet/planet.obj");

    earth->addComponent<MeshRenderer>(planetModel.meshes[0], mapShader);

    while(!glfwWindowShouldClose(e.window.get()))
    {
        glClearColor(0.12f, 0.16f, 0.26f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        e.Tick();
        e.Render();
    }

    return 0;
}