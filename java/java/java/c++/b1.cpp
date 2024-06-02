#include<iostream>
using namespace std;
int main()
{
    char c;
    cin>>c;
    if(c=='Z'||c=='z')
    {
        cout<<"a";
    }
    else if(c>='A'&&c<'Z')
    {
        c=c+33;
        cout<<c;
    }
    else if(c>='a'&&c<'z')
    {
        c=c+1;
        cout<<c;
    }
    return 0;
}