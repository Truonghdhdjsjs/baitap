#include<iostream>
using namespace std;
void hcv(int h)
{
    for (int i = 1; i <=h; i++)
    {
        /* code */
        for (int j = 1; j <=h; j++)
        {
            /* code */
            cout<<"*";
        }
        cout<<endl;
    }

    
}
int main()
{
    int h;
    do
    {
       cin>>h;
       if (h<=0)
       {
        /* code */
            cout<<" Gia tri khong ton tai";
            cin>>h;
       }
    } while (h<=0);
    cout<<"in ra hinh chu nhat"<<endl;
    hcv(h);
    return 0;
}