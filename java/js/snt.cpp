#include<iostream>
using namespace std;
bool snt(int n)
{
    if (n<2)
    {
        /* code */
        return false;
    }
    for (int i = 2; i*i<=n; i++)
    {
        /* code */
        if (n%i==0)
        {
            /* code */
            return false;
        }
        
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    if (snt(n)==true)
    {
        /* code */
        cout<<"là số ngto"<<n;
    }
    else
    {
        cout<<"không la so ngto"<<n;
    }
    return 0;
    
}