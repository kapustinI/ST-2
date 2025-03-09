// Copyright 2025 UNN-CS
#ifndef INCLUDE_CIRCLE_H_
#define INCLUDE_CIRCLE_H_
#include <cstdint>
#include <cmath>
const double PI = 3.141592653589793;
class Circle {
 private:
	double radius;
	double ference;
	double area;

	void updateFromRadius();
	void updateFromFerence();
	void updateFromArea();

 public:
	explicit Circle(double r);
	void setRadius(double r);
	void setFerence(double f);
	void setArea(double a);
	double getRadius() const;
	double getFerence() const;
	double getArea() const;
};

#endif  // INCLUDE_CIRCLE_H_
