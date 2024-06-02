//tinhs trung binhf coong cua thien tam
#include<iostream>
using namespace std;
void nhapgiatri(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
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
bool kiemtrasole(int x)
{
    while (x>=0)
    {
        /* code */
        x=x/10;
    }
    if (x%2!=0)
    {
        /* code */
        return true;
    }
    return false;
    
}
float trungbinhcong(int a[],int n)
{
    int tong=0;
    int dem=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        tong+=a[i];
        dem++;
    }
    return (tong*1.0/dem);
}
int main()
{
    int n;
    do
    {
        cin>>n;
        /* code */
        if (n<=0||n>100)
        {
            /* code */
            cout<<"Gia trij khong ton tai";
            return 0;
        }
    } while (n<=0||n>100);
    int a[n];
    nhapgiatri(a,n);
    xuatdulieu(a,n);
    cout<<"tinh trung binh cong"<<trungbinhcong(a,n)<<endl;
    system("pause");
    return 0;
}