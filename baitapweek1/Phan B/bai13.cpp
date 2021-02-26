#include <iostream>

#include <math.h>

using namespace std;
int main() {
  int x, y;
  double khoangcach;
  cin >> x;
  cin >> y;
  khoangcach = sqrt(double(x*x+y*y));
  cout <<khoangcach;
  return 0;
}
