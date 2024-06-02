#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        /* code */
        for (int j = 1; j <=n; j++)
        {
            /* code */cout<<"*";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<endl;
    cout<<endl;
    for (int i = 1; i <=n; i++)
    {
        /* code */
        for (int j = 1; j <=n; j++)
        {
            /* code */
            if (j==1||j==7||i==1||i==7)
            {
                /* code */
                cout<<"*"<<" ";
            }
            else
            {
                cout<<" "<<" ";
            }
            
        }
        cout<<endl;
    }
    
    cout<<endl;
    cout<<endl;
    cout<<endl;
    for (int i = 1; i<=n; i++)
    {
        /* code */
       for (int j = 1; j<=n; j++)
       {
        /* code */
            if(j==1||j==7||i==j)
            {
                cout<<"*"<<" "; 
            }
            else
            {
                cout<<" "<<" ";
            }
            
       }
       cout<<endl;
    }
     cout<<endl;
    cout<<endl;
    cout<<endl;
    for ( int i=1;i<=n;i++)
    {
        for (int j = 1; j <= n; j++)
        {
            /* code */
            if (j==1||i==j||i==7)
            {
                /* code */
                cout<<"*"<<" ";
            }
            else
            {
                cout<<" "<<" ";
            }  
        }
        cout<<endl;
    }
    
    return 0;
}