#include<iostream>
using namespace std;
void nhapdulieu(int a[],int n)
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
            cout<<" Gia tri khong tai or g ia tri qua lon";
            return 0;
        }
    } while (n<=0||n>10);
    int a[n];
    nhapdulieu(a,n);
    xuatdulieu(a,n);
    return 0;
}