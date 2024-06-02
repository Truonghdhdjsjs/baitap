#include<iostream>
using namespace std;
int main()
{
    int n,dem=0;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        /* code */
        if (n%i==0)
        {
            /* code */
            cout<<i<<" ";
            dem++;
        }
        
    }
    cout<<dem;
    return 0;
}