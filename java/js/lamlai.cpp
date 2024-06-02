#include<iostream>
#include<limits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>a[i];
    }
    int minValues=a[0];
    int maxValues=a[0];
    for (int  i = 0; i < n; i++)
    {
        /* code */
       if (a[i]<minValues)
       {
        /* code */
            minValues=a[i];
       }
       if (a[i]>maxValues)
       {
        /* code */
            maxValues=a[i];
       }      
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (a[i]>minValues&&a[i]<maxValues)
        {
            /* code */
            cout<<a[i]<<"\n";
        }
    }
    return 0;
}