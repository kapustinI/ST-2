// Copyright 2025 UNN-CS
#include <cstdint>
#include "circle.h"
Circle::Circle(double r) {
	setRadius(r);
}
void Circle::updateFromRadius() {
	ference = 2 * PI * radius;
	area = PI * radius * radius;
}
void Circle::updateFromFerence() {
	radius = ference / (2 * PI);
	area = PI * radius * radius;
}

void Circle::updateFromArea() {
	radius = std::sqrt(area / PI);
	ference = 2 * PI * radius;
}

void Circle::setRadius(double r) {
	radius = (r >= 0) ? r : 0;
	updateFromRadius();
}

void Circle::setFerence(double f) {
	if (f > 0) {
		ference = f;
		updateFromFerence();
	}
	else {
		radius = 0;
		ference = 0;
		area = 0;
	}
}

void Circle::setArea(double a) {
	if (a > 0) {
		area = a;
		updateFromArea();
	}
	else {
		radius = 0;
		ference = 0;
		area = 0;
	}
}

double Circle::getRadius() const {
	return radius;
}

double Circle::getFerence() const {
	return ference;
}

double Circle::getArea() const {
	return area;
}
