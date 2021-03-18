#include <iostream>
using namespace std;
int main()
{
    int a[3];
    char b[3];
    for (int i = 0; i < 3; i++){
        cout<<(void *)&a[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<3; i++){
        cout<<(void *)&b[i]<<" ";
    }
    cout<<endl;

    // ket qua kha tuong dong nhau, chi khac o hai chi so cuoi

    a[0]=23;
    b[0]=44;
    for (int i = 0; i < 3; i++){
        cout<<(void *)&a[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<3; i++){
        cout<<(void *)&b[i]<<" ";
    }
    cout<<endl;
    return 0;

    // ket qua truoc va sau khi nhap gia tri vao mang giong nhau

}
