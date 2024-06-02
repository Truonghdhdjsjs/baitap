// Tính S=x+x^3+x^5+...+x^2n+1
#include<iostream>
using namespace std;
int main()
{
    int x,n;
    long long int lt=1,s=0;
    cin>>x;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        /* code */
        lt=lt*x;
        if (i%2!=0)
        {
            /* code */
            s=s+lt;
        }
        
    }
    cout<<s;
    return 0;
}