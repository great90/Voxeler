#pragma once

#ifndef VOX_RENDERER
#define VOX_RENDERER

#include "Vertex.h"
#include "VertexArray.h"
#include "Shader.h"
#include "../Core.hpp"

namespace Voxeler{
    class Renderer{
        public:
            ~Renderer();
		    Renderer(const Renderer&) = delete;

            Renderer& operator=(const Renderer&) = delete;

            static Renderer& Ref() {
                static Renderer reference;
                return reference;
            }

            vint InitializeRenderer();

        private:
            Renderer();
    };
    static Renderer& Render = Renderer::Ref();
}

#endif