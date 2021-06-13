#pragma once

#include "../Core.hpp"

namespace Voxeler{
    using vuint32 = unsigned int;
    using vuint = vuint32;
    using vint = int;
    using vfloat = float;
    using vufloat = double;
    using vlong = long;
    using vshort = short;
    using vchar = char;
    using vstring = char*;
    using vbool = bool;
    using Matrix4 = glm::mat4;
    using Vector3f = glm::fvec3;
    using Vector3 = glm::vec3;
    using Vector2 = glm::vec2;
}

namespace Voxeler{
    class Math{
        public:
		static float Cos(int deg);
		static float Sine(int deg);
		static float Lerp(float start, float stop, float step);
		static float PI();

		static float Radians(float degrees);
		static float power(float base, int exp);
		static int fact(int n);
    };
}