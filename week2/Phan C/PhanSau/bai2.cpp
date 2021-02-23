#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int ketqua=1;
    for (int i=0; i<y; i++){
        ketqua*=x;
    }
    cout<<ketqua<<endl;
    int kiemtra=pow(x,y);
    if(ketqua==kiemtra){
        cout<<"Dung";
    }else{
        cout<<"Sai";
    }
    return 0;
}
