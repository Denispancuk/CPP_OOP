#pragma once
#include "Point.h"
class Vector
{
	Point* points;
	int countPoint;
public:
	Vector()
	{
		points = nullptr;
		countPoint = 0;
	}
	explicit Vector(int countPoint)
	{
		this->countPoint = countPoint;
		points = new Point[countPoint];
	}
	Vector(const Vector& other)
	{
		this->countPoint = other.countPoint;
		this->points = new Point[countPoint];
		for (int i = 0; i < countPoint; i++)
		{
			this->points[i] = other.points[i];
		}
	}
	Vector& operator =(const Vector& other) {
		this->countPoint = other.countPoint;
		if (points != nullptr)
		{
			delete[] points;
		}

		for (int i = 0; i < countPoint; i++)
		{
			this->points[i] = other.points[i];
		}
		return *this;
	}
};

