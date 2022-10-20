#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

int SmallestNonconstructibleValue(vector<int> A) {
  sort(A.begin(), A.end());
  int max_nonconstructible_value = 0;
  for (int a : A) {
    if (a > max_nonconstructible_value + 1) {
      break;
    }
    max_nonconstructible_value += a;
  }
  return max_nonconstructible_value + 1;
}

int main(int argc, char *argv[])
{
  vector<int> coins = {12, 2, 1, 15, 2, 4};
  assert(SmallestNonconstructibleValue(coins) == 10);
  return 0;
}
