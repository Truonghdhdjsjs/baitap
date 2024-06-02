#include<iostream>
using namespace std;
void tgd(int h)
{
    for (int i = 1; i <=h; i++)
    {
        /* code */
        for (int j = 1; j <=2*h-1; j++)
        {
            /* code */
            if ((j>=h-i+1)&&(j<=h+i-1))
            {
                /* code */
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        
    cout<<endl;
    }
}
int main()
{
    int h;
    do
    {
        /* code */
        cin>>h;
        if (h<=0)
        {
            /* code */
            cout<<"Giá trị không tồn tại";
            cin>>h;
        }
    } while (h<=0);
    tgd(h);
    return 0;
}