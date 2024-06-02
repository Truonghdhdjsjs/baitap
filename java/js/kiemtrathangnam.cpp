#include<iostream>
using namespace std; 
int main()
{
    int nam,thang;
    cin>>nam;
    do
    {
        /* code */
        cin>>thang;
        if (thang<0||thang>12)
        {
            /* code */
            cout<<"khong có thang nao nhu v";
            cin>>thang;
        }
    } while (thang<0||thang>12);
    switch (thang)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
       cout<<"thang có 31 ngay";
        break;
    case 4:
    case 6:
    case 11:
        cout<<" thang co 30 ngay";
    case 2:
        if ((nam%400==0)||(nam%4==0&&nam%100!=0))
        {
            /* code */
            cout<<"tháng có 29 ngày";
            break;
        }
        else
        {
            cout<<"thang có 28 ngay";
            break;
        }
    default:
    cout<<" khong co du lieu";
        break;
    }
    return 0;
}