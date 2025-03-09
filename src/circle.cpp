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
	if (r > 0) {
		radius = r;
		updateFromRadius();
	}
}

void Circle::setFerence(double f) {
	if (f > 0) {
		ference = f;
		updateFromFerence();
	}
}

void Circle::setArea(double a) {
	if (a > 0) {
		area = a;
		updateFromArea();
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
