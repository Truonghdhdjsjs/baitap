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
           cout<<"nhap";
           continue;
        }
        
    } while (n<=0);
    
    for (int i = 1; i <=n; i++)
    {
        /* code */
        for (int j = 1; j <=n; j++)
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
    return 0;
}