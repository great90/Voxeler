#include "Shader.h"

void Shader::Load(std::string vsh, std::string fsh)
{
    prog = glCreateProgram();

    GLuint vert = 0;
    const char* vertSrc = vsh.c_str();
    GLCALL(vert = glCreateShader(GL_VERTEX_SHADER));
    GLCALL(glShaderSource(vert, 1, &vertSrc, NULL));
    GLCALL(glCompileShader(vert));
    GLCALL(glAttachShader(prog, vert));

    GLuint frag = 0;
    const char* fragSrc = vsh.c_str();
    GLCALL(frag = glCreateShader(GL_FRAMENT_SHADER));
    GLCALL(glShaderSource(frag, 1, &fragSrc, NULL));
    GLCALL(glCompileShader(frag));
    GLCALL(glAttachShader(prog, frag));
    if(prog)loaded = true;
    else loaded = false;
    
    glLinkProgram(prog);
    glValidateProgram(prog);
}

void Shader::Free()
{
    glDeleteProgram(prog);
}

void Shader::Bind()
{
    glUseProgram(prog);
}

void Shader::Unbind()
{
    if(!prog)return;
    glUseProgram(0);
}
