#pragma once

#ifndef VOX_SHADER
#define VOX_SHADER

#include "../Core.hpp"

class Shader {
    private:
        GLuint prog;
        bool loaded;
    public:
        void Load(std::string vsh, std::string fsh);
        void Free();

        void Bind();
        void Unbind();

        Shader() = default;
        ~Shader() = default;
};

#endif // SHADER
