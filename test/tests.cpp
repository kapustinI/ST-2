// Copyright 2025 UNN-CS Team

#include <gtest/gtest.h>
#include <cstdint>
#include "circle.h"
#include "tasks.h"

TEST(CircleTests, Constructor) {
  Circle c(5);
  EXPECT_DOUBLE_EQ(c.getRadius(), 5);
}

TEST(CircleTests, SetRadius) {
  Circle c(10);
  c.setRadius(7);
  EXPECT_DOUBLE_EQ(c.getRadius(), 7);
  EXPECT_DOUBLE_EQ(c.getFerence(), 2 * PI * 7);
  EXPECT_DOUBLE_EQ(c.getArea(), PI * 7 * 7);
}

TEST(CircleTests, SetFerence) {
  Circle c(1);
  c.setFerence(2 * PI * 3);
  EXPECT_DOUBLE_EQ(c.getRadius(), 3);
  EXPECT_DOUBLE_EQ(c.getArea(), PI * 3 * 3);
}

TEST(CircleTests, SetArea) {
  Circle c(1);
  c.setArea(PI * 4 * 4);
  EXPECT_DOUBLE_EQ(c.getRadius(), 4);
  EXPECT_DOUBLE_EQ(c.getFerence(), 2 * PI * 4);
}

TEST(CircleTests, ZeroRadius) {
  Circle c(0);
  EXPECT_DOUBLE_EQ(c.getRadius(), 0);
  EXPECT_DOUBLE_EQ(c.getFerence(), 0);
}

TEST(CircleTests, NegativeRadius) {
  Circle c(-5);
  EXPECT_DOUBLE_EQ(c.getRadius(), 0);
}

TEST(CircleTests, RopeGap) {
  double gap = ropeGap();
  EXPECT_NEAR(gap, 0.159, 0.001);
}

TEST(CircleTests, PoolCosts) {
  double cost = poolCosts();
  EXPECT_NEAR(cost, 72256.5, 0.2);
}

TEST(CircleTests, LargeRadius) {
  Circle c(10000);
  EXPECT_DOUBLE_EQ(c.getFerence(), 2 * PI * 10000);
}

TEST(CircleTests, LargeFerence) {
  Circle c(1);
  c.setFerence(2 * PI * 8000);
  EXPECT_DOUBLE_EQ(c.getRadius(), 8000);
}

TEST(CircleTests, LargeArea) {
  Circle c(1);
  c.setArea(PI * 5000 * 5000);
  EXPECT_DOUBLE_EQ(c.getRadius(), 5000);
}

TEST(CircleTests, SetRadiusZero) {
  Circle c(5);
  c.setRadius(0);
  EXPECT_DOUBLE_EQ(c.getRadius(), 0);
  EXPECT_DOUBLE_EQ(c.getFerence(), 0);
  EXPECT_DOUBLE_EQ(c.getArea(), 0);
}

TEST(CircleTests, SetFerenceZero) {
  Circle c(5);
  c.setFerence(0);
  EXPECT_DOUBLE_EQ(c.getRadius(), 0);
  EXPECT_DOUBLE_EQ(c.getFerence(), 0);
  EXPECT_DOUBLE_EQ(c.getArea(), 0);
}

TEST(CircleTests, SetAreaZero) {
  Circle c(5);
  c.setArea(0);
  EXPECT_DOUBLE_EQ(c.getRadius(), 0);
  EXPECT_DOUBLE_EQ(c.getFerence(), 0);
  EXPECT_DOUBLE_EQ(c.getArea(), 0);
}

TEST(CircleTests, FerenceAndRadiusRelation) {
  Circle c(2);
  EXPECT_DOUBLE_EQ(c.getFerence(), 2 * PI * 2);
}

TEST(CircleTests, AreaAndRadiusRelation) {
  Circle c(3);
  EXPECT_DOUBLE_EQ(c.getArea(), PI * 3 * 3);
}

TEST(CircleTests, ChangeRadiusAndCheckFerence) {
  Circle c(2);
  c.setRadius(5);
  EXPECT_DOUBLE_EQ(c.getFerence(), 2 * PI * 5);
}

TEST(CircleTests, ChangeRadiusAndCheckArea) {
  Circle c(2);
  c.setRadius(5);
  EXPECT_DOUBLE_EQ(c.getArea(), PI * 5 * 5);
}

TEST(CircleTests, ChangeFerenceAndCheckRadius) {
  Circle c(1);
  c.setFerence(2 * PI * 4);
  EXPECT_DOUBLE_EQ(c.getRadius(), 4);
}

TEST(CircleTests, ChangeAreaAndCheckRadius) {
  Circle c(1);
  c.setArea(PI * 6 * 6);
  EXPECT_DOUBLE_EQ(c.getRadius(), 6);
}
