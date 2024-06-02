#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    double result=0;
    cin>>a>>b;
    if (a==0)
    {
        /* code */
        cout<<"phuong trinh vo nghiem";
    }
    else
    {
        result=(double)-b/a;
        cout<<"phuong trinh co nghiem la "<<" "<<result;
    }
    return 0;
}