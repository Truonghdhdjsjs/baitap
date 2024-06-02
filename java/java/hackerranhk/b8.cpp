#include<iostream>
using namespace std;
int main()
{
    int n ,tich=1;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        /* code */
        if (n%i==0)
        {
            /* code */
            tich*=i;
        }
        
    }
    cout<<tich;
    return 0;
    
}