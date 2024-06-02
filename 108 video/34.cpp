#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,min,max=0,ln=0;
    cin>>n;
    while (n!=0)
    {
        /* code */
        ln=n%10;
        if(ln>max)
        {
            max=ln;
        }
        if (ln<min)
        {
            /* code */
            min=ln;
        }
        n=n/10;
    }
    cout<<max<<" "<<min;
    return 0;
}