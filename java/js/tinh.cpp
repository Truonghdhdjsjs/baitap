#include<iostream>
using namespace std;
int main()
{
    int n,dem=0;
    long long int tong=0,kq=0;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        /* code */
        tong+=i;
        dem++;
    }
    kq=tong/dem;
    cout<<kq;
    return 0;
}