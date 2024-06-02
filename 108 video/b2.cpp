#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    long long int tong=0;
    while (n!=0)
    {
        /* code */
        tong = tong +n%10;
        n/=10;
    }
    cout<<tong;
    return tong;
}