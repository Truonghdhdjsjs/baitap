#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double toan,van,anh,dtb=0;
    cin>>toan;
    cin>>van;
    cin>>anh;
    dtb=((toan*2)+(van*2)+anh)/5;
    cout<< fixed<<setprecision(1) << dtb;
    return 0;
}