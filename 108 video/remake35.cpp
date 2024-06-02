#include<iostream>
using namespace std;
bool kiemtratangdan(long long int  n)
{
    long long int s,ln=0;
    while (n!=0)
    {
        /* code */
        ln=n%10;
        if (ln>s)
        {
            /* code */
            return false;
        }
            s=ln;
        n=n/10;
    }
    return true;
}
int main()
{
    long long int n;
    cin>>n;
    if (kiemtratangdan(n)==true)
    {
        /* code */
        cout<<"la so tang dan"<<n;
    }
    else
    {
        cout<<"la so giam dan"<<n;
    }
    return 0;
}