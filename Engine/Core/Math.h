#pragma once

#include "../Core.hpp"

namespace Voxeler{
    class Math{
        public:
		static float Cos(int deg);
		static float Sin(int deg);
		static float Lerp(float start, float stop, float step);
		static float PI();

		static float Radians(float degrees);
        static float Degrees(float radians);
        
		static float power(float base, int exp);
		static int fact(int n);
    };
}