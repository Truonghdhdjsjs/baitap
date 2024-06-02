#include<iostream>
using namespace std;
bool kiemtrangto(int n)
{
    if (n<2)
    {
        /* code */
        return false;
    }
    for (int i = 2; i *i<=n; i++)
    {
        /* code */
        if (n%i==0)
        {
            /* code */
            return false;
        }
        
    }
    return true;
    
    
}
int main()
{
    int n;
    cin>>n;
    if (kiemtrangto(n)==true)
    {
        /* code */
        cout<<"so nguyen to";
    }
    else
    {
        cout<<"khong la so nguyen to";
    }
    return 0;
}