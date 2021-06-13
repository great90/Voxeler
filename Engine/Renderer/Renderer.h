#pragma once

#ifndef VOX_RENDERER
#define VOX_RENDERER

#include "Shader.h"
#include "../Core.hpp"
#include "../Core/Math.h"

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

            uint InitializeRenderer();

        private:
            Renderer();
    };
    static Renderer& Render = Renderer::Ref();
}

#endif