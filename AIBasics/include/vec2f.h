#pragma once

#include <cmath>
#include <iostream>

class vec2f
{
	public:
	vec2f() :
		x(0), y(0)
	{

	}

	vec2f(float x_in, float y_in) :
		x(x_in), y(y_in)
	{

	}

	float dist(vec2f _target)
	{
		return sqrt((this->x - _target.x)*(this->x - _target.x)
					+ (this->y - _target.y)*(this->y - _target.y));
	}

	float magnitude()
	{
		return sqrt(this->x*this->x + this->y*this->y);
	}

	vec2f getUnitVec()
	{
		return vec2f(this->x / magnitude(), this->y / magnitude());
	}

	vec2f operator - (const vec2f& rhs)
	{
		return vec2f(this->x - rhs.x, this->y - rhs.y);
	}

	vec2f operator * (const float rhs)
	{
		return vec2f(this->x * rhs, this->y * rhs);
	}

	vec2f& operator += (const vec2f& rhs)
	{
		this->x += rhs.x;
		this->y += rhs.y;
		return *this;
	}

	vec2f& operator -= (const vec2f& rhs)
	{
		this->x -= rhs.x;
		this->y -= rhs.y;
		return *this;
	}

	friend std::ostream& operator << (std::ostream& os, const vec2f& vec)
	{
		os << "(" << vec.x << ", " << vec.y << ")";
		return os;
	}

	float x;
	float y;

};