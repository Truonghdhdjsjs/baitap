#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    for (int  i = 1; i <=n; i++)
    {
        /* code */
        for (int j =1 ; j <=n; j++)
        {
            /* code */
            if (j==1||i==7||j==i)
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
    for(int i=1;i<=n;i++)
    {
        for (int j = 1; j <=n; j++)
        {
            /* code */
           if (j == 1 || i == 7 || j == i || i == n + 1 || j == n + 1 || i == n - j + 1)
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
    return 0;
}