#include <iostream>
#include <math.h>
using namespace std;
int check(int n) {
  if (n <= 1) {
    return 0;
  } else {
    for (int i = 2; i <= sqrt(n); i++) {
      if (n % i == 0) {
        return 0;
      } else {
        return 1;
      }
    }
  }
}
int main() {
  int n;
  cin >> n;
  for (int i = 2; i <= n; i++)
    if (bool(1) == 1) cout << i << " ";
  return 0;
}
