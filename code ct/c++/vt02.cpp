#include<iostream>
using namespace std;

int findmax(int a[], int n) {
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

int findsecondnumber(int a[], int n) {
    int max = findmax(a, n);
    int max2 = INT_MIN; // Khởi tạo max2 với giá trị tối thiểu có thể
    for (int i = 0; i < n; i++) {
        if (a[i] != max && a[i] > max2) {
            max2 = a[i];
        }
    }
    return max2;
}

int main() {
    int n;
    do {
        cout << "Nhap so luong phan tu cua mang (n > 1): ";
        cin >> n;
    } while (n <= 1);

    int a[n];
    cout << "Nhap cac phan tu cua mang:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max2 = findsecondnumber(a, n);
    if (max2 == INT_MIN) {
        cout << "Khong ton tai so lon thu hai trong mang.\n";
    } else {
        cout << "So lon thu hai trong mang la: " << max2 << endl;
    }

    return 0;
}
