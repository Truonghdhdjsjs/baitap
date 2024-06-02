#include<iostream>
#include<cmath>
using namespace std;
bool kiemtrasochinhphuong(int x)
{
    int can=sqrt(x);
    return can*can==x;
}
int main()
{
    int n;
    cin>>n;
    long long int tong=0;
    int a[n];   
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>a[i];
    }
    bool kt=false;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (kiemtrasochinhphuong(a[i]))
        {
            /* code */
            tong+=a[i];
            kt=true;
        }
        
    }
    if (kt)
    {
        /* code */
        cout<<tong;
    }
    else
    {
        cout<<-1;
    }
    
    
    return 0;
}