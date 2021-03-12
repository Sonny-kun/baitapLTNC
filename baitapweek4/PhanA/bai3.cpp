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
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    int x,dem=0;
    cout << "Nhap so: ";
    cin >> x;
    for(int i=0;i<n;i++){
        if(x==a[i]) dem++;
    }
    if(dem==0){
        cout << "Khong co so can tim" << endl;
    }else{
        cout << "Co so trong day" << endl;
    }
    cout << "Day: ";
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
        }
}

