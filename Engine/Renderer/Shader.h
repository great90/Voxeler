#pragma once

#ifndef VOX_SHADER
#define VOX_SHADER

#include "../Core.hpp"

class Shader {
    private:
        GLuint prog;
        GLuint prog_v;
        GLuint prog_m;
        GLuint prog_p;
        GLuint prog_res;
        GLuint prog_prop;
        GLuint prog_time;
        std::map<std::string, GLuint>uniforms;
        bool loaded;
    public:
        void Load(std::string vsh, std::string fsh);
        void Free();
        ~Shader();
};

#endif // SHADER