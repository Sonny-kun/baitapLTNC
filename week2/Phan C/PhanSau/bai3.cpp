#include<iostream>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    if ( a<b+c && b<a+c && c<a+b ){
        cout<<"La 3 canh hinh tam giac"<<endl;
    }else{
        cout<<"Khong phai 3 canh hinh tam giac"<<endl;
    }
    if( a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b){
        cout<<"Tam giac vuong";
    }
    else if(a==b && b==c){
        cout<<"Tam giac deu";
    }
    else if(a==b || a==c || b==c){
        cout<<"Tam giac can";
    }
    else if(a*a > b*b+c*c || b*b > a*a+c*c || c*c > a*a+b*b){
        cout<<"Tam giac tu";
    }
    else{
        cout<<"Tam giac nhon";
    }
    return 0;
}
