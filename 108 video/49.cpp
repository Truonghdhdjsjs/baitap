#include<iostream>
using namespace std;
int main()
{
    int n;
    do
    {
        /* code */
        cin>>n;
        if (n<=0)
        {
            /* code */
            continue;
        }
    } while (n<=0);
    int a[n];
    int i=0;
    while (i<n)
    {
        /* code */
        cin>>a[i];
        if(i>0 && a[i]<=a[i-1])
        {
            continue;
        }
        i++;
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<a[i];
    }
    
return 0;
}