#include<iostream>
using namespace std;
int main()
{
    //Tính S(n) = 1 + 2 + 3 + … + n
    int n;
    long long int tong=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        tong+=i;
    }
    cout<<tong;
    return  0;
}