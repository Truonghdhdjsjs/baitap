#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n ,count=0;
    cin>>n;
    for (int i = 1; i <= abs(n); i++)
    {
        /* code */
        if(n%i==0)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}