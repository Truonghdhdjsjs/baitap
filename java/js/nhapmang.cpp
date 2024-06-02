#include<iostream>
#include<limits> // Để sử dụng giá trị numeric_limits
using namespace std;

int main() {
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    if(n <= 0) {
        cout << "Gia tri khong hop le";
        return 0;
    }

    int a[n];

    cout << "Nhap cac phan tu cua mang:\n";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Tìm giá trị nhỏ nhất và lớn nhất trong mảng
    int minValue = a[0];
    int maxValue = a[0];

    for(int i = 1; i < n; i++) {
        if(a[i] < minValue) {
            minValue = a[i];
        }
        if(a[i] > maxValue) {
            maxValue = a[i];
        }
    }

    // In ra các giá trị thỏa mãn điều kiện
    cout << "Cac gia tri lon hon gia tri nho nhat (" << minValue << ") va nho hon gia tri lon nhat (" << maxValue << ") trong mang la:\n";
    for(int i = 0; i < n; i++) {
        if(a[i] > minValue && a[i] < maxValue) {
            cout << a[i] << " ";
        }
    }

    return 0;
}
