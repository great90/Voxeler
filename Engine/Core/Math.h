#pragma once

#include "../Core.hpp"

namespace Voxeler{
    using vint = int;
    using vfloat = float;
    using vufloat = double;
    using vlong = long;
    using vshort = short;
    using vchar = char;
    using vstring = char*;
    using vbool = bool;

    using Vector3f = glm::fvec3;
    using Vector3 = glm::vec3;
    using Vector2 = glm::vec2;

	double Sin(double angle) { return glm::sin(angle); }
	double Cos(double angle) { return glm::cos(angle); }
	double Tan(double angle) { return glm::tan(angle); }
}
