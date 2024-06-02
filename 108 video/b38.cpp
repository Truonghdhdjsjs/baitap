#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,delta=0;
    cin>>a>>b>>c;
    delta=pow(b,2)-4*a*c;
    if (delta<0)
    {
        /* code */
        cout<<"phuong trinh vo nghiem";
    }
    else if(delta==0)
    {
        double result = (double)-b/a;
        cout<<" phuong trinh co 1 nghiem"<<" "<<result;
    }
    else if(delta>0)
    {
        double x1 = (double)((-b+sqrt(delta))/(2*a));
        double x2 = (double)((-b-sqrt(delta))/(2*a));
        cout<<"phuong trinh co 2 nghiem"<<" "<<x1<<" "<<x2;
    }
    return 0;
}