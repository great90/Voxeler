#pragma once

#include "../ECS.h"

struct Transform : public ECS::BaseComponent {
    public:
        Transform() = default;
        ~Transform() = default;

        Voxeler::Vector3f Position = Voxeler::Vector3f(0.0f);
        Voxeler::Vector3f Rotation = Voxeler::Vector3f(0.0f);
        Voxeler::Vector3f Scale = Voxeler::Vector3f(1.0f);
};