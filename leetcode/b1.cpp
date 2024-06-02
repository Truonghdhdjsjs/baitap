#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    long long int delta=0,x1=0,x2=0;
    cin>>a>>b>>c;
    delta=pow(b,2)-4*a*c;
   if(delta<0)
   {
        cout<<"phuong trinh vo nghiem";
   }
   else if (delta==0)
   {
    /* code */
        x1=x2=(-b)/(2*a);
        cout<<x1;
   }
   else if(delta>0)
   {
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
        cout<<x1<<endl;
        cout<<x2;
   }
}