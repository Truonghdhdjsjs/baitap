#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>a[i];
    }
    int count=0;
    int tong = 0;
   int kq=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (a[i]%2!=0)
        {
            /* code */
            tong+=a[i];
            count++;
        }
    }
    kq=tong/count;
    cout<<kq;
    return 0;
}