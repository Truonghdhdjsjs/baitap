#include<iostream>
#include<cmath>
using namespace std;

bool songto(int t) {
    if (t < 2)
        return false;
    for (int i = 2; i * i <= t; i++) {
        if (t % i == 0) {
            return false;
        }
    }
    return true;
}

void snd(int m) {
    for (int i = 1; i <= m; i++) {
        if (m % i == 0) {
            cout << i << " ";
        }
    }
}
void pheptinh(int x,int a)
{
    long long int gt=1,s=0;
    for(int i=1;i<=a;i++)
    {
        gt=gt*x;
        if(a%i==1)
        {
            s=s+gt;
        }
        for (int j = 1; j <=a ; j++)
        {
            /* code */
            
        }
        
    }
   
}
void hoandoi(int b)
{
    long long int gt=0;
    while (b!=0)
    {
        /* code */
        gt=gt*10+b%10;
        b=b/10;
    }
    cout<<gt;
}
int main() {
    int n;
    cout << "Nhap chuong trinh ban muon khoi dong: ";
    cin >> n;
    
    switch (n) {
    case 1:
        cout << "Chuong trinh tim so nguyen to" << endl;
        int t; // Move the declaration here
        cin >> t;
        if (songto(t)) {
            cout << t << " la so nguyen to" << endl;
        } else {
            cout << t << " khong la so nguyen to" << endl;
        }
        break;
    case 2:
        int m;
        cout << "Nhap so m: ";
        cin >> m;
        snd(m);
        break;
    case 3:
        double x,a;
        cin>>x;
        cin>>a;
        pheptinh(x,a);
        break;
    case 5:
        int b;
        cin>>b;
        hoandoi(b);
        break;
    default:
        cout << "Khong hop le. Chuong trinh ket thuc." << endl;
        break;
    }
    return 0;
}
