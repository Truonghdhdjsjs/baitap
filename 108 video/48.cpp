#include<bits/stdc++.h>
using namespace std;
void nhapdulieu(int a[],int n)
{
    for (int  i = 0; i < n; i++)
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
        cout<<endl;
    }
}

int main()
{
    int n;
    do
    {
        /* code */
        cin>>n;
        if (n<=0)
        {
            /* code */
            continue;
        }
        
    } while (n<=0);
    int a[n];
    nhapdulieu(a,n);
    xuatdulieu(a,n);
    return 0;
}