#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,demchan=0,demle=0;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(a[i]%2==0)
        {
            demchan++;
          cout<<"co"<<demchan<<" "<<a[i];
        }
        else
        {
            demle++;
             cout<<"co"<<demle<<" "<<a[i];
        }
    }
    return 0;
}