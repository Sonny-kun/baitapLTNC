#include<iostream>
using namespace std;
void pvb(int x, int y)
{
    int m = x;
    x = y;
    y = m;
    cout << &x << " " << &y << endl;
}
void pvb2(int &x, int &y)
{
    int m = x;
    x = y;
    y = m;
    cout << &x << " " << &y << endl;
}
int main()
{
    int x, y;
    cin >> x >> y;
    cout << &x << " " << &y << endl;
    pvb(x, y);
    pvb2(x, y);
    return 0;

    // dong 1 khac dong 2, dong 1 giong dong 3, dieu nay chung to doi so va tham tri khac nhau, doi so va tham bien la cung mot bien
}

