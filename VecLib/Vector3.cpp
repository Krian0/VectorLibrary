#include "stdafx.h"
#include "Vector3.h"
#include <math.h>

#pragma region Constructors & Destructor
Vector3::Vector3() : x(0), y(0), z(0) {}							
Vector3::Vector3(float X, float Y, float Z) : x(X), y(Y), z(Z) {}	
Vector3::~Vector3() {}
#pragma endregion


#pragma region Operators
Vector3& Vector3::operator + (const Vector3 R)		{ return Vector3(x + R.x,	y + R.y,	z + R.z); }
Vector3& Vector3::operator - (const Vector3 R)		{ return Vector3(x - R.x,	y - R.y,	z - R.z); }
Vector3& Vector3::operator * (const float R)		{ return Vector3(x * R,		y * R,		z * R); }
Vector3& Vector3::operator / (const float R)		{ return Vector3(x / R,		y / R,		z / R); }
Vector3& operator*(const float L, const Vector3 R)	{ return Vector3(R.x * L,	R.y * L,	R.z * L); }
Vector3& operator/(const float L, const Vector3 R)	{ return Vector3(R.x / L,	R.y / L,	R.z / L); }

Vector3& Vector3::operator = (const Vector3 R)	{ x  = R.x;		y  = R.y;	z  = R.z;	return *this; }
Vector3& Vector3::operator += (const Vector3 R) { x += R.x;		y += R.y;	z += R.z;	return *this; }
Vector3& Vector3::operator -= (const Vector3 R) { x -= R.x;		y -= R.y;	z -= R.z;	return *this; }
Vector3& Vector3::operator *= (const float R)	{ x *= R;		y *= R;		z *= R;		return *this; }
Vector3& Vector3::operator /= (const float R)	{ x /= R;		y /= R;		z /= R;		return *this; }
Vector3& operator*=(const float L, Vector3 R)	{ R.x *= L;		R.y *= L;	R.z *= L;	return R; }
Vector3& operator/=(const float L, Vector3 R)	{ R.x /= L;		R.y /= L;	R.z /= L;	return R; }

bool operator == (const Vector3 L, const Vector3 R) { return (L.x == R.x && L.y == R.y && L.z == R.z); }
bool operator != (const Vector3 L, const Vector3 R) { return (L.x != R.x && L.y != R.y && L.z != R.z); }

Vector3 const Vector3::operator-() const { return Vector3(-x, -y, -z); }
#pragma endregion


#pragma region Functions
void Vector3::SetVector(float X, float Y, float Z) { x = X;	y = Y;	z = Z; }
#pragma endregion