#include<iostream>
#include<cstdio>
using namespace std;
int ucln(int n,int m)
{
    if(m==0||n==0)
     return m+n;
    while (m!=n)
    {
        /* code */
        if(m>n)
        {
            m=m-n;
        }
        else
        {
            n=n-m;
        }

    }
    return m;
    
}
int main()
{
    int m,n;
    cin>>m;
    cin>>n;
    cout<<ucln(m,n);
    return 0;
}