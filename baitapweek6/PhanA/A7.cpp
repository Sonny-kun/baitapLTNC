#include <iostream>
using namespace std;
int n;
int Bool[100] = { 0 };
int A[100];
void xuat() {
    for (int i = 1; i <= n; i++)
        cout << A[i] << " ";
    cout << endl;
}
void Try(int k) {
    for (int i = 1; i <= n; i++) {
        if (!Bool[i]) {
            A[k] = i;
            Bool[i] = 1;
            if (k == n)
                xuat();
            else
                Try(k + 1);
            Bool[i] = 0;
        }
    }
}
int main() {
    cout << "Nhap n: ";
    cin >> n;
    Try(1);
}
