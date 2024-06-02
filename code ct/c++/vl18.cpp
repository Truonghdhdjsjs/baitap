#include<iostream>
using namespace std;
int main()
{
    int n ;
    long long  int gt=0;
    cin>>n;
    while (n!=0)
    {
        /* code */
        gt= gt*10+n%10;
        n=n/10;
    }
    cout<<gt;
    return  0;
}