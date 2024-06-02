#include<iostream>
using namespace std;
int main()
{
    char a, b;
    cout << "Nhap vao hai ky tu: ";
    cin >> a >> b;
    
    // Chuyển ký tự thứ nhất thành chữ thường
    if(a >= 'A' && a <= 'Z')
        a += 32;

    // Chuyển ký tự thứ hai thành chữ thường
    if(b >= 'A' && b <= 'Z')
        b += 32;

    // In các ký tự từ a đến b ở dạng chữ thường
    for (char i = a; i <= b; i++)
    {
        cout << i;
    }

    return 0;
}
