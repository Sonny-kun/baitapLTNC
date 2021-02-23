#include <iostream>
using namespace std;
int main()
{
    double k;
    cin >> k;
    while(k>0){
        k=k/3;
        if (k<3)
            break;
    }
    cout<<k;
    return 0;
}
