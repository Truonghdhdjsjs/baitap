#include<iostream>
using namespace std;
bool sotangdan(int n)
{
    long long ln=0,s=9;
    while (n!=0)
    {
        /* code */
        ln=n%10;
        if (ln>s)
        {
            /* code */
            return false;
        }
         s = ln;
        n=n/10;
    }
    return true;
    
}
int main()
{
    long long int n;
    cin>>n;
    if (sotangdan(n)==true)
    {
        /* code */
        cout<<" la so tang dan";
    }
    
}