#include "stdafx.h"
#include "UtilityVec2.h"
#include <math.h>

namespace UV2
{
	float distance(Vector2 V1, Vector2 V2) { return length(V1 - V2); }
	float distanceSquared(Vector2 V1, Vector2 V2) { return lengthSquared(V1 - V2); }
	float length(Vector2 V1) { return sqrtf(lengthSquared(V1)); }
	float lengthSquared(Vector2 V1) { return dot(V1, V1); }
	float dot(Vector2 V1, Vector2 V2) { return (V1.x * V2.x) + (V1.y * V2.y); }

	Vector2 normal(Vector2 V1) { float Mag = length(V1);	return Mag != 0 ? V1 / Mag : V1; }
	Vector2 perp(Vector2 V1) { return Vector2(V1.y, -V1.x); }
	Vector2 projectOnAxis(Vector2 V1, Vector2 DIR) { return DIR * dot(V1, DIR); }
	Vector2 reflect(Vector2 VEL, Vector2 DIR, float BOUNCE) { return BOUNCE * -(2 * dot(VEL, DIR) * DIR - VEL); }
	Vector2 reflect(Vector2 VEL, Vector2 DIR) { return reflect(VEL, DIR, 1); }
	Vector2 unit(Vector2 V1) { return V1 / length(V1); }
}