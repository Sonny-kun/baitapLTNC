#include <iostream>
using namespace std;
int a[100];
int b[100];
int n;
void recursive(int x) {
  for (int i = 1; i <= n; i++) {
    if (b[i] == 0) {
      b[i] = 1;
      a[x] = i;
      //cout<<x<<"**"<<endl;

      for (int t = 1; t <= x; t++)
        cout << a[t];
      cout << endl;
      if (x + 1 <= n) recursive(x + 1);
      b[i] = 0;
    }
  }
}
int main() {
  cin >> n;
  recursive(1);
  return 0;
}
