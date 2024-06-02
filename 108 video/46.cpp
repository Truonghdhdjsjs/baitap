#include<bits/stdc++.h>
using namespace std;
void nhapmang(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>a[i];
    }
}
void xuatmang(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<a[i]<<" ";
    }
}

bool sohoanthien(int n )
{
    int tong=0;
    for (int i = 0; i*i <=n ; i++)
    {
        /* code */
        if (n%i==0)
        {
            /* code */
            tong+=i;
        }
    }
    if (tong==n)
    {
        /* code */
        return  true;
    }
    else
    {
        return  false;
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    nhapmang(a,n);
    xuatmang(a,n);
    for (int i = 0; i < n; i++)
    {
    if (sohoanthien(a[i])==true)
    {
        cout << a[i] << " ";
    }
    }

    return  0;
}