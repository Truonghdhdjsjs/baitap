#include<iostream>
using namespace std;
bool kiemtarsohoanthien ( int n )
{
    int tong=0;
    for (int  i = 1; i <=n; i++)
    {
        /* code */
        tong+=i;
        if (tong==n)
        {
            /* code */
            return false;
        }
        return true;
    }
}
int main()
{
    int n ;
    cin>>n;
    if (kiemtarsohoanthien(n)==true)
    {
        /* code */
        cout<<"so "<<n<<"la so hoan thien";
    }
    else
    {
        cout<<"so "<<n<<"khong la so hoan thien";
    }
    return 0;
}