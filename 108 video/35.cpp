#include<iostream>
using namespace std;
int main()
{
    long long n,ln=0,tam;
    cin>>n;
    tam=n;
    while (tam!=0)
    {
        /* code */
        ln=ln*10+tam%10;
        tam=tam/10;
    }
    if(ln==n)
    {
        cout<<" la so ddoi xung"<<n;
    }
    return 0;
}