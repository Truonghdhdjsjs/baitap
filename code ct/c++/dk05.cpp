#include<iostream>
#include<cmath>

using namespace std;
bool chinhphuong(int n)
{
    int can = sqrt(n);
    return can*can==n;
}
int main()
{
    int n ;
    cin>>n;
    if(chinhphuong(n)==true)
    {cout<<"yes";}
    else
    {cout<<"no";}
    return 0;
}
