#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 1)
        return 1;
    cout << n << "! = " << n * factorial(n - 1) << " at " << &n<< endl;
    return n * factorial(n - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;

    // cac gia tri duoc luu tru tai cac dia chi giong nhau
}
