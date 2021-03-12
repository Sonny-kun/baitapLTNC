#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    int n;
    cin >> n;
    srand(time(0));
    int a[n];
    for(int i=0;i<n;i++){
        a[i] = rand() % (100-0+1)-0;
    }
    int x,dem=0;
    cin >> x;
    for(int i=0;i<n;i++){
        if(x==a[i]) dem++;
    }
    if(dem==0){
        cout << "Khong co so can tim" << endl;
    }else{
        cout << "Co so can tim" << endl;
    }
    cout << "Day: ";
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
        }
}
