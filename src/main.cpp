#include <iostream>
#include <vector>
#include "prime.h"

using namespace std;

int main()
{
  Prime prime;
  int number;

  cout << "Enter a number: ";
  cin >> number;

  vector<bool> results = prime.run(number);

  for (auto i : results)
    cout << boolalpha << i << ", ";

  return 0;
}