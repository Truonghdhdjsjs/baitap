#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int maxUCLN=0;
    for (int i = 1; i <=n; i++)
    {
        /* code */
        if (n%i==0)
        {
            /* code */
            if (i%2!=0)
            {
                /* code */
               if (i>maxUCLN)
               {
                /* code */
                    maxUCLN=i;
               }
            }
            
        }
    }
cout<<maxUCLN;
    return 0;
}