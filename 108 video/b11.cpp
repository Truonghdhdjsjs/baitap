#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    long long int tong=0;
    for (int i = 1; i <=n; i++)
    {
        /* code */
        if (n%i==0 && n!=i)
        {
            /* code */
        cout<<i<<" ";
        tong+=i;
        }
        
    }
    cout<<tong;
    return 0;
}