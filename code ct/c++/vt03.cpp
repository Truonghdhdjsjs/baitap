#include<iostream>
using namespace std;
int main()
{
    int n ;
    do
    {
        /* code */
        cin>>n;
        if(n<=0)
        {
            continue;
        }
    } while (n<=0);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>a[i];
    }
    int count=0;
    int max=a[0];
    for (int  i = 0; i < n; i++)
    {
        /* code */
        if (a[i]>max)
        {
            /* code */
            max=a[i];
            count++;
        }
        
    }
    cout<<count;
    return 0;
}