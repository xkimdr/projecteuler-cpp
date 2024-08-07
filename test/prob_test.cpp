#include <gtest/gtest.h>

#include "pe.hpp"

TEST(PE001, aop) { EXPECT_EQ(P001::aop(), 233168); }

TEST(PE002, aop) { EXPECT_EQ(P002::aop(), 4613732); }

TEST(PE003, aop) { EXPECT_EQ(P003::aop(), 6857); }

TEST(PE004, aop) { EXPECT_EQ(P004::aop(), 906609); }

TEST(PE005, aop) { EXPECT_EQ(P005::aop(), 232792560); }

TEST(PE006, aop) { EXPECT_EQ(P006::aop(), 25164150); }

TEST(PE007, aop) { EXPECT_EQ(P007::aop(), 104743); }
