#pragma once

#ifndef VOX_SHADER
#define VOX_SHADER

#include "../Core.hpp"

namespace Voxeler{
	class Shader {
		public:
			Shader() : prog(0) {}
			Shader(const GLuint id) : prog(id) {}

			void Bind();
			void UnBind();
			void Load(std::string vsh, std::string fsh);
			void Free();

			void Set1i(const GLchar* uName, GLint value);
			void Set1f(const GLchar* uName, GLfloat value);
			void Set2f(const GLchar* uName, GLfloat x, GLfloat y);
			void SetV2f(const GLchar* uName, glm::vec2 v);
			void Set3f(const GLchar* uName, GLfloat x, GLfloat y, GLfloat z);
			void SetV3f(const GLchar* uName, glm::vec3 v);
			void Set4f(const GLchar* uName, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
			void SetV4f(const GLchar* uName, glm::vec4 v);
			void SetMatrix4f(const GLchar* uName, const GLfloat* mtx);

			GLuint Program() const {
				return prog;
			}

		private:
			GLuint prog;
			bool loaded = false;
		};
}

#endif