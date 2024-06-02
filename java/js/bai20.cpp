#include<iostream>
#include<cmath>
using namespace std;
bool cpt(int x)
{
    int squareRoot = sqrt(x);
    return squareRoot * squareRoot == x;
}
int main()
{
    int n;
    long long int tong =0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bool found=false;
     for (int i = 0; i < n; i++) {
        if (cpt(a[i])) {
            tong+=a[i];
            found = true;
        }
    }
    if (found) {
        cout << tong;
    } else {
        cout << -1;
    }
    return 0;
}