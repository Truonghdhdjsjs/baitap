#include<iostream>
using namespace std;
int main()
{
    int n ,min=9,max=0 ;
    cin>>n;
    while (n!=0)
    {
        /* code */
        int digital=n%10;
        if (digital>max)
        {
            /* code */
            max=digital;
        }
        if (digital<min)
        {
            /* code */
            min=digital;
        }
        n=n/10;
    }
    cout<<min<<" "<<max;
    return 0;
}