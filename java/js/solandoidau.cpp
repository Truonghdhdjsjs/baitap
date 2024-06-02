#include<iostream>
using namespace std;
int countSignChanges(int a[],int n)
{
    int dem=0;
    for(int i=0;i<n;i++)
    {
        if((a[i]<0 && a[i-1]>=0) || (a[i]>=0 && a[i-1]<0))
        {
            dem++;
        }
    }
    return dem;
}
int main()
{
    int n ;
    cin>>n;
    int a[n];
    for (int  i = 0; i < n; i++)
    {
        /* code */
        cin>>a[i];
        if (a[i]==0)
        {
            /* code */
            break;
        }
        
    }
    int change=countSignChanges(a,n);
    if(change>0)
    {
        cout<<change;
    }
   return 0;
}