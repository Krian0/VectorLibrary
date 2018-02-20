#include "stdafx.h"
#include "Vector2.h"
#include <math.h>

#pragma region Constructors & Destructor
Vector2::Vector2() : x(0), y(0) {}					
Vector2::Vector2(float X, float Y) : x(X), y(Y) {}	
Vector2::~Vector2() {}
#pragma endregion


#pragma region Operators
Vector2& Vector2::operator + (const Vector2 R)		{ return Vector2(x + R.x,	y + R.y); }
Vector2& Vector2::operator - (const Vector2 R)		{ return Vector2(x - R.x,	y - R.y); }
Vector2& Vector2::operator * (const float R)		{ return Vector2(x * R,		y * R); }
Vector2& Vector2::operator / (const float R)		{ return Vector2(x / R,		y / R); }
Vector2& operator*(const float L, const Vector2 R)	{ return Vector2(R.x * L,	R.y * L); }
Vector2& operator/(const float L, const Vector2 R)	{ return Vector2(R.x / L,	R.y / L); }
	  
Vector2& Vector2::operator = (const Vector2 R)	{ x  = R.x;	y  = R.y;	return *this; }
Vector2& Vector2::operator += (const Vector2 R) { x += R.x;	y += R.y;	return *this; }
Vector2& Vector2::operator -= (const Vector2 R) { x -= R.x;	y -= R.y;	return *this; }
Vector2& Vector2::operator *= (const float R)	{ x *= R;	y *= R;		return *this; }
Vector2& Vector2::operator /= (const float R)	{ x /= R;	y /= R;		return *this; }
Vector2& operator*=(const float L, Vector2 R)	{ R.x *= L; R.y *= L;	return R; }
Vector2& operator/=(const float L, Vector2 R)	{ R.x /= L; R.y /= L;	return R; }

bool operator == (const Vector2 L, const Vector2 R) { return (L.x == R.x && L.y == R.y); }
bool operator != (const Vector2 L, const Vector2 R) { return (L.x != R.x && L.y != R.y); }

Vector2 const Vector2::operator-() const { return Vector2(-x, -y); }
#pragma endregion


#pragma region Functions
void Vector2::SetVector(float X, float Y) { x = X;	y = Y; }
#pragma endregion