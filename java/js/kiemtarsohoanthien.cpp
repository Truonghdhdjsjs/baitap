#include<iostream>
using namespace std;
int hh(int x)
{
    long long int sum=0;
    for (int  i = 1; i < x; i++)
    {
        /* code */
        if (x%i==0)
        {
            /* code */
            sum+=i;
            if (i!=x/i)
            {
                /* code */
                sum+=x/i;
            }
            
        }   
    }
    if (sum==x&&x!=1)
    {
        /* code */
        return 1;
    }
    return 0;
    
}
int main()
{
    int n;
    cin>>n;
    if (n<=0)
    {
        /* code */
        cout<<"mang rong";
        return 0;
    }
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==0)
        {
            break;
        }
    }
    bool kiemtra=false;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<i;
        kiemtra=true;
    }
    if (!kiemtra)
    {
        /* code */
        cout<<-1;
    }
    return 0;
}