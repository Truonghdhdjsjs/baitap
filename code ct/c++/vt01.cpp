#include<iostream>
using namespace std;
int main()
{
    int n,max[0];
    do
    {
        cin>>n;
        /* code */
        if (n<=0)
        {
            /* code */
            continue;
        }
    } while (n<=0);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (a[i]>max[0])
        {
            /* code */
            max[0]=a[i];
        }
        
        
    }
    cout<<max[0];
    return 0;
}