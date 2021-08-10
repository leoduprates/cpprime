#include "prime.h"
#include <iostream>
#include <vector>

using namespace std;

bool Prime::isPrime(int number)
{
  bool prime = true;

  if (number <= 1)
    return false;

  for (int i = 2; i < number; i++)
    if (number % i == 0)
      prime = false;

  return prime;
}

vector<bool> Prime::run(int number)
{
  vector<bool> results;

  for (int i = 0; i <= number; i++)
    results.push_back(isPrime(i));

  return results;
}