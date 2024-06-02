#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<" dem so luong so lon nhat trong day so";
    long long int n,dem=1,ln=0,max=0;
    cin>>n;
    while (n!=0)
    {
        /* code */
        ln=n%10;
        if(ln>max)
        {
            max=ln;
        }
        if(ln==max)
        {
            dem++;
        }
        n=n/10;
    }
    cout<<max<<endl;
    cout<<dem;
    return 0;
}