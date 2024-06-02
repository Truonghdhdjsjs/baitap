#include<iostream>
using namespace std;
int main()
{
    int n,dem=0,sum;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>a[i];
        dem++;
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<a[i]<<" ";
    }
    cout<<dem<<" ";
    return 0;
}