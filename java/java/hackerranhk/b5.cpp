#include<iostream>
using namespace std;
int main()
{
    int tong;
    cin>>tong;
    int gio=(tong%86400)/3600;
    int phut=(tong%3600)/60;
    int giay=(tong%3600)%60;
    cout<<gio<<"\n"<<phut<<"\n"<<giay;
    return 0;
}