#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    for (int i = a; i <= b; i++)
    {
        /* code */
        if(i%3==0)
        {
            cout<<i;
        }
        else
        {
            cout<<"NOT FOUND";
        }
    }
    return 0;
}