#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int* a=&n;
	cout << n;
	delete a;
	cout << n;

}

//vung nho bien dia phuong bi xoa dan toi mat du lieu.
