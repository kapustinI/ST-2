// Copyright 2025 UNN-CS Team
#include "tasks.h"
#include <cmath>
#include "circle.h"

double ropeGap() {
  Circle earth(6378100);
  double newFerence = earth.getFerence() + 1;
  Circle newCircle(0);
  newCircle.setFerence(newFerence);
  return newCircle.getRadius() - earth.getRadius();
}

double poolCosts() {
  Circle pool(3);
  Circle full(4);

  double concreteArea = full.getArea() - pool.getArea();
  double fenceLength = full.getFerence();

  double concreteCost = concreteArea * 1000;
  double fenceCost = fenceLength * 2000;

  return concreteCost + fenceCost;
}
