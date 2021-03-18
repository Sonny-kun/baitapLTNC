#include <iostream>
using namespace std;
void array(int a[])
{
    for (int i = 0; i < 3; i++){
        cout << &a[i] << " ";
    }
    cout << endl;
}
void stringg(string s)
{
    cout << &s << endl;
}
int main()
{
    int a[3] = {1,2,3};
    for (int i = 0; i < 3; i++){
        cout << &a[i] << " ";
    }
    cout << endl;
    array(a);
    string s;
    cout << &s << endl;
    stringg(s);
    return 0;

    // ta thay mang duoc truyen theo co che pass by refenrence , string truyen theo pass by value
}
