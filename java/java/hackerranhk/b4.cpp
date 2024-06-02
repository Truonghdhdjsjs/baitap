#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int donvi=n%10;
   int chuc=(n%100)/10;
   int tram=n/100;
   cout<<donvi<<chuc<<tram;
   return 0;
}