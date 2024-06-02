#include<iostream>
using namespace std;
bool sohoanthien(int n)
{
    long long int tong =0;
    for( int i=1;i<=n;i++)
    {
        if(n%i==0&&n!=i)
        {
            tong+=i;
        }
    }
    if (tong==n)
    {
        /* code */
        return true;
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    if (sohoanthien(n)==true)
    {
        /* code */
        cout<<" so hoan thien la "<<" "<<n;
    }
    else
    {
        cout<<"khong so hoan thien la "<<" "<<n;
    }
    return 0;
}