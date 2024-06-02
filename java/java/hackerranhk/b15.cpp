#include<iostream>
using namespace std;
int main()
{
    int n ,m; 
    cin>>n;
    cin>>m;
    for (int  i = 1; i<=n; i++)
    {
        /* code */
        if (n%i==0)
        {
            /* code */
            cout<<i<<"\t";
        }
        
    }
    for (int  j = 1; j <=m; j++)
    {
        /* code */
        if (m%j==0)
        {
            /* code */
            cout<<j<<"\t";
        }
    }
    
    return 0;
}