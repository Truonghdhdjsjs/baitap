#include<iostream>
using namespace std;

int main()
{
    int n;
    long long int gt = 0, result = 0, tbc = 0, kq = 0;
    int dem = 0;
    cin >> n;

    // Đảo ngược số và tính tổng các chữ số
    while (n != 0)
    {
        result = result * 10 + n % 10;
        n = n / 10;
    }

    // Lấy chữ số đầu tiên của số đảo ngược
    gt = result % 10;

    if (gt % 2 != 0)
    {
        // Tính tổng các chữ số của số ban đầu và đếm số chữ số
        while (result != 0)
        {
            kq = kq + result % 10;
            result = result / 10;
            dem++;
        }
        // Tính trung bình cộng
        tbc = kq / dem;
        cout << tbc;
    }
    else
    {
        cout << "So dau la so chan";
    }

    return 0;
}
