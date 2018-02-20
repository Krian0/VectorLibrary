#include "stdafx.h"
#include "UtilityVec4.h"
#include <math.h>

namespace UV4
{
	float distance(Vector4 V1, Vector4 V2) { return length(V1 - V2); }
	float distanceSquared(Vector4 V1, Vector4 V2) { return lengthSquared(V1 - V2); }
	float length(Vector4 V1) { return sqrtf(lengthSquared(V1)); }
	float lengthSquared(Vector4 V1) { return dot(V1, V1); }
	float dot(Vector4 V1, Vector4 V2) { return (V1.x * V2.x) + (V1.y * V2.y) + (V1.z * V2.z) + (V1.w * V2.w); }

	Vector4 cross(Vector4 V1, Vector4 V2) { return Vector4((V1.y * V2.z) - (V1.z * V2.y), (V1.z * V2.x) - (V1.x * V2.z), (V1.x * V2.y) - (V1.y * V2.x), 0); }
	Vector4 normal(Vector4 V1) { float Mag = length(V1);	return Mag != 0 ? V1 / Mag : V1; }
	Vector4 perp(Vector4 V1, Vector4 V2, Vector4 V3) { return cross((V2 - V1), (V3 - V2)); }
	Vector4 projectOnAxis(Vector4 V1, Vector4 DIR) { return DIR * dot(V1, DIR); }
	Vector4 reflect(Vector4 VEL, Vector4 DIR, float BOUNCE) { return BOUNCE * -(2 * dot(VEL, DIR) * DIR - VEL); }
	Vector4 reflect(Vector4 VEL, Vector4 DIR) { return reflect(VEL, DIR, 1); }
	Vector4 unit(Vector4 V1) { return V1 / length(V1); }
}