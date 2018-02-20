#include "stdafx.h"
#include "UtilityVec3.h"
#include <math.h>

namespace UV3
{
	float distance(Vector3 V1, Vector3 V2) { return length(V1 - V2); }
	float distanceSquared(Vector3 V1, Vector3 V2) { return lengthSquared(V1 - V2); }
	float length(Vector3 V1) { return sqrtf(lengthSquared(V1)); }
	float lengthSquared(Vector3 V1) { return dot(V1, V1); }
	float dot(Vector3 V1, Vector3 V2) { return (V1.x * V2.x) + (V1.y * V2.y) + (V1.z * V2.z); }

	Vector3 cross(Vector3 V1, Vector3 V2) { return Vector3((V1.y * V2.z) - (V1.z * V2.y), (V1.z * V2.x) - (V1.x * V2.z), (V1.x * V2.y) - (V1.y * V2.x)); }
	Vector3 normal(Vector3 V1) { float Mag = length(V1);	return Mag != 0 ? V1 / Mag : V1; }
	Vector3 perp(Vector3 V1, Vector3 V2, Vector3 V3) { return cross((V2 - V1), (V3 - V2)); }
	Vector3 projectOnAxis(Vector3 V1, Vector3 DIR) { return DIR * dot(V1, DIR); }
	Vector3 reflect(Vector3 VEL, Vector3 DIR, float BOUNCE) { return BOUNCE * -(2 * dot(VEL, DIR) * DIR - VEL); }
	Vector3 reflect(Vector3 VEL, Vector3 DIR) { return reflect(VEL, DIR, 1); }
	Vector3 unit(Vector3 V1) { return V1 / length(V1); }
}