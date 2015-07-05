//
// Created by alex on 6/8/15.
//

#pragma once

#include <iostream>
#include <memory>
#include <GL/glew.h>
#include <GL/gl.h>
#include "GLWindow.h"

#include <Graphics/glew.h>
#include <SDL.h>

namespace engine
{
    class Renderer final
    {
    public:
        explicit Renderer();
        ~Renderer() = default;
        void Init();
        void Update();

        GLuint CompileShader(std::string shader, GLenum shader_type, int element_count) const;
        std::string LoadShader(const std::string &shader_location) const;
        std::string ShaderCompilationResult(const GLuint shader) const;

    private:
        std::unique_ptr<sdl2::GLWindow> window_;
        GLuint shader_program_;
        GLuint VAO_;
        GLuint VBO_;
    };
}
