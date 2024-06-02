#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,dem=0,max=0,ln=0;
    cin>>n;
    while (n!=0)
    {
        /* code */
        ln=n%10;
        if(ln>max)
        {
            max=ln;
            dem = 1;
             if (ln==max)
            {
                /* code */
                dem++;
            }
        }
        n=n/10;
    }
    cout<<max<<" "<<dem;
    return 0;
}