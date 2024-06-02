#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,dem=0,tong=0;
    double result=0;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>a[i];
        
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<a[i]<<" ";
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
         tong = tong + a[i];
        dem++;
        result=(double)(tong/dem);
    }
        cout<<result;
    return 0;
}