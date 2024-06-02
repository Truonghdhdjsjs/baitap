#include<bits/stdc++.h>
using namespace std;
bool  songuyenduong(int n,int gt)
{
    while (n!=0)
    {
        /* code */
        gt=n%10;
        if(gt%2!=0)
        {
            return false;
        }
        n=n/10;
    }
    return true;
    
}
int main()
{
    long long int n,gt=0;
    cin>>n;
    if (songuyenduong(n,gt)==true)
    {
        /* code */
        cout<<"so nay toan chan";
    }
    else
    {
        cout<<" giai thua nay co so le";
    }
    return 0;
}