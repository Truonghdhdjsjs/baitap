#include<iostream>
using namespace std;
void nhapdulieu(int a[],int n)
{
    for (int  i = 0; i < n; i++)
    {
        /* code */
        cin>>a[i];
    }
    
}
void xuatdulieu(int a[],int n)
{
  for (int i = 0; i < n; i++)
  {
    /* code */
     cout<<a[i]<<"";
  }
  
}
bool kiemtrangto(int n)
{   
    if (n<2)
    {
        /* code */
        return  false;
    }
    for (int i = 2; i*i <=n; i++)
    {
        /* code */
        if (n%i==0)
        {
            /* code */
            return false;
        }
        
    }
    return true;
    
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    nhapdulieu(a,n);
    xuatdulieu(a,n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (kiemtrangto(a[i])==true)
        {
            /* code */
            cout<<a[i]<<" ";
            
        }
    }
    
    
 return 0;   
}