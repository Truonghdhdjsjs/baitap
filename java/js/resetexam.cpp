#include<iostream>
using namespace std;
int main()
{
    int n;
    long long int result=0,gt=0,tbc=0,dem=0,kq=0;
    cin>>n;
    do
    {
        /* code */
        cin>>n;
        if(n<=0)
        {
            cout<<" kiem tra lai phan tu";
            cin>>n;
        }
    } while (n<=0);
    while (n!=0)
    {
        /* code */
        result=result*10+n%10;
        n=n/10;
    }
    gt=result%10;
    if (gt%2!=0)
    {
        /* code */
        while (result!=0)
        {
            /* code */
            kq=kq+result%10;
            result=result/10;
            dem++;
        }
        tbc=kq/dem;
        cout<<tbc;
    }
    return 0;
}