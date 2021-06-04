#pragma once

#include "../ECS.h"

struct Transform : public ECS::BaseComponent {
    public:
        Transform() = default;
        ~Transform() = default;

        glm::fvec3 Position = glm::fvec3(0.0f);
        glm::fvec3 Rotation = glm::fvec3(0.0f);
        glm::fvec3 Scale = glm::fvec3(1.0f);
};