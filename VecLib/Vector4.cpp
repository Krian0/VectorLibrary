#include "stdafx.h"
#include "Vector4.h"

#pragma region Constructors & Destructor
Vector4::Vector4() : x(0), y(0), z(0), w(0) {}									
Vector4::Vector4(float X, float Y, float Z, float W) : x(X), y(Y), z(Z), w(W) {}
Vector4::~Vector4() {}
#pragma endregion


#pragma region Operators
Vector4& Vector4::operator + (const Vector4 R)		{ return Vector4(x + R.x,	y + R.y,	z + R.z,		w + R.w); }
Vector4& Vector4::operator - (const Vector4 R)		{ return Vector4(x - R.x,	y - R.y,	z - R.z,		w - R.w); }
Vector4& Vector4::operator * (const float R)		{ return Vector4(x * R,		y * R,		z * R,			w * R); }
Vector4& Vector4::operator / (const float R)		{ return Vector4(x / R,		y / R,		z / R,			w / R); }
Vector4& operator*(const float L, const Vector4 R)	{ return Vector4(R.x * L,	R.y * L,	R.z * L,		R.w * L); }
Vector4& operator/(const float L, const Vector4 R)	{ return Vector4(R.x / L,	R.y / L,	R.z / L,		R.w / L); }

Vector4& Vector4::operator = (const Vector4 R)	{ x  = R.x;		y  = R.y;	z  = R.z;	w = R.w;	return *this; }
Vector4& Vector4::operator += (const Vector4 R) { x += R.x;		y += R.y;	z += R.z;	w += R.w;	return *this; }
Vector4& Vector4::operator -= (const Vector4 R) { x -= R.x;		y -= R.y;	z -= R.z;	w -= R.w;	return *this; }
Vector4& Vector4::operator *= (const float R)	{ x *= R;		y *= R;		z *= R;		w *= R;		return *this; }
Vector4& Vector4::operator /= (const float R)	{ x /= R;		y /= R;		z /= R;		w /= R;		return *this; }
Vector4& operator*=(const float L, Vector4 R)	{ R.x *= L;		R.y *= L;	R.z *= L;	R.w *= L;	return R; }
Vector4& operator/=(const float L, Vector4 R)	{ R.x /= L;		R.y /= L;	R.z /= L;	R.w /= L;	return R; }

bool operator == (const Vector4 L, const Vector4 R) { return (L.x == R.x && L.y == R.y && L.z == R.z); }
bool operator != (const Vector4 L, const Vector4 R) { return (L.x != R.x && L.y != R.y && L.z != R.z); }

Vector4 const Vector4::operator-() const { return Vector4(-x, -y, -z, -w); }
#pragma endregion


#pragma region Functions
void Vector4::SetVector(float X, float Y, float Z, float W)
{
	x = X;
	y = Y;
	z = Z;
	w = W;
}
#pragma endregion