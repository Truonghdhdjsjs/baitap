#include<iostream>
using namespace std;
void nhapdulieu(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
void xuatdulieu(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<a[i]<<" ";
    }
}
bool ktsnt(int x)
{
    if (x<2)
    {
        /* code */
        return false;
    }
    for (int i = 2; i*i<=x; i++)
    {
        /* code */
        if (x%i==0)
        {
            /* code */
            return false;
        }  
    }
    return true;
}
bool ktrsnt(int a[],int n)
{
    for (int i = 0; i < n; i++) // SỬA ĐỔI: Duyệt qua từng phần tử của mảng a
    {
        if (!ktsnt(a[i])) // SỬA ĐỔI: Kiểm tra tính nguyên tố của từng phần tử
        {
            return false;
        }
    }
    return true;

}
int main()
{
    int n;
    do
    {
        /* code */
        cin>>n;
        if (n<=0||n>100)
        {
            /* code */
            cout<<"gia tri khong ton tai";
            cin>>n;
        }
    } while (n<=0||n>100);
    int a[n];
    nhapdulieu(a,n);
    xuatdulieu(a,n);
    if (ktrsnt(a, n))
    {
        cout << "la so sieu nguyen to";
    }
    else
    {
        cout << "khong la so sieu nguyen to";
    }
    return 0;
}