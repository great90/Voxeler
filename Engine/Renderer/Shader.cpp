#include "Shader.h"
#include "../Errors/Errors.h"

void Shader::Free()
{
    glDeleteProgram(prog);
}

void Shader::Bind()
{
    glUseProgram(prog);
}

void Shader::UnBind()
{
    if(!prog)return;
    glUseProgram(0);
}

void Shader::Set1i(const GLchar* uName, GLint value) {
	glUniform1i(glGetUniformLocation(prog, uName), value);
}

void Shader::Set1f(const GLchar* uName, GLfloat value) {
	glUniform1f(glGetUniformLocation(prog, uName), value);
}

void Shader::Set2f(const GLchar* uName, GLfloat x, GLfloat y) {
	glUniform2f(glGetUniformLocation(prog, uName), x, y);
}

void Shader::SetV2f(const GLchar* uName, glm::vec2 v) {
	Set2f(uName, v.x, v.y);
}

void Shader::Set3f(const GLchar* uName, GLfloat x, GLfloat y, GLfloat z) {
	glUniform3f(glGetUniformLocation(prog, uName), x, y, z);
}

void Shader::SetV3f(const GLchar* uName, glm::vec3 v) {
	Set3f(uName, v.x, v.y, v.z);
}

void Shader::Set4f(const GLchar* uName, GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
	glUniform4f(glGetUniformLocation(prog, uName), x, y, z, w);
}

void Shader::SetV4f(const GLchar* uName, glm::vec4 v) {
	Set4f(uName, v.x, v.y, v.z, v.z);
}

void Shader::SetMatrix4f(const GLchar* uName, const GLfloat* mtx) {
	glUniformMatrix4fv(glGetUniformLocation(prog, uName), 1, GL_FALSE, mtx);
}