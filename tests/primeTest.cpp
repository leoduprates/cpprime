#include <iostream>
#include <vector>
#include "gtest/gtest.h"
#include "../src/prime.h"

using namespace std;

TEST(PrimeTest, threeIsPrimeNumber)
{
    Prime prime;
    bool result = prime.isPrime(3);
    ASSERT_TRUE(result);
}

TEST(PrimeTest, seventeenIsPrimeNumber)
{
    Prime prime;
    bool result = prime.isPrime(17);
    ASSERT_TRUE(result);
}

TEST(PrimeTest, fourIsCompositeMumbers)
{
    Prime prime;
    bool result = prime.isPrime(4);
    ASSERT_FALSE(result);
}

TEST(PrimeTest, ZeroIsCompositeMumber)
{
    Prime prime;
    bool result = prime.isPrime(0);
    ASSERT_FALSE(result);
}

TEST(PrimeTest, OneIsCompositeMumber)
{
    Prime prime;
    bool result = prime.isPrime(1);
    ASSERT_FALSE(result);
}

TEST(PrimeTest, NegativeNumber)
{
    Prime prime;
    bool result = prime.isPrime(-1);
    ASSERT_FALSE(result);
}

TEST(PrimeTest, DoubleCompositeNumber)
{
    Prime prime;
    bool result = prime.isPrime(0.2);
    ASSERT_FALSE(result);
}

TEST(PrimeTest, DoublePrimeNumber)
{
    Prime prime;
    bool result = prime.isPrime(3.2);
    ASSERT_TRUE(result);
}

TEST(PrimeTest, ShouldReturnFourResultsWithPrimeAndCompositeMumbers)
{
    Prime prime;
    vector<bool> result = prime.run(4);
    vector<bool> expected{false, false, true, true, false};
    EXPECT_EQ(result, expected);
}