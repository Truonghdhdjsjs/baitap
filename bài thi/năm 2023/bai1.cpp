#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    long long int delta=0;
    cin>>a>>b>>c;
    delta=pow(b,2)-4*a*c;
    cout<<delta;
    return  0;
}