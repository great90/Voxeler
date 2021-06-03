#pragma once

#ifndef VOX_SHADER
#define VOX_SHADER

#include "../Core.hpp"

class Shader {
    private:
        GLuint prog;
        Gluint prog_v;
        Gluint prog_m;
        Gluint prog_p;
        Gluint prog_res;
        Gluint prog_prop;
        Gluint prog_time;
        std::map<std::string, GLuint>uniforms;
        bool loaded;
    public:
        void Load(std::string vsh, std::string fsh);
        void Free();
        ~Shader();
};

#endif // SHADER