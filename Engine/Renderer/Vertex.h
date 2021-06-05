#pragma once

#include "Renderer.h"


namespace Voxeler{
    struct Vertex {
        Vertex() = default;
        Vertex(float x, float y, float z): Position(Vector3(x, y, z)){}
        Vertex(Vector3 position): Position(position), Normal(0), TexCoords(0) { }
        Vertex(Vector3 position, Vector3 normal): Position(position), Normal(normal), TexCoords(0) { }
        Vertex(Vector3 position, Vector3 normal, Vector2 texcoord): Position(position), Normal(normal), TexCoords(texcoord) { }
        
        Vector3 Position = Vector3(0.0f);
        Vector3 Normal = Vector3(0.0f);
        Vector2 TexCoords = Vector2(0.0f);
    };
}
