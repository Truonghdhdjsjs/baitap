#include<iostream>
#include<fstream>
using namespace std;

bool snt(int n)
{
    if(n < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        } 
    }
    return true; 
}

void ucsnto(int n,ofstream& file)
{
    file << "Cac uoc so cua " << n << " la: ";
    for(int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            file << i << " ";
        } 
    }
}

void tonguocso(int n,ofstream& file)
{
    int tong = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if(n % i == 0)
        {
            tong += i;
        }
    }
    file << "\n Tong cac uoc so cua " << n << " la: " << tong;
}
void sodaonguuoc(int n,ofstream& file)
{
    long long int gt=0;
    int dem=0;
    while (n!=0)
    {
        /* code */
        gt=gt*10+n%10;
        n=n/10;
    }
    file<<"so dao nguoc"<<gt;

}
void tongsodaonguoc(int n ,ofstream& file)
{
    long long int tong=0;
    int dem=0;
    while (n!=0)
    {
        /* code */
        tong=tong+n%10;
        n=n/10;
        dem++;
    }
    file<<"tong so dao nguoc\t"<<tong<<endl;
    file<<"so luong so"<<dem;
}
int main()
{
    ofstream outFile("baithi.txt");
    int n;
    do
    {
        cin >> n;
        if(n <= 0)
        {
            outFile << "Chuong trinh khong the chay\n";
            continue;
        }
    } while (n <= 0);

    if (snt(n))
    {
        outFile << "So nguyen to la: " << n << endl;
    }
    else
    {
        outFile << "So khong nguyen to la: " << n << endl;
    }

    ucsnto(n,outFile);
    outFile << endl;

    tonguocso(n,outFile);
    outFile << endl;
    //tinh si dao nguoc
    sodaonguuoc(n,outFile);
    outFile<<endl;
    //tinh tong vaf tinh so trong phan tuw
    tongsodaonguoc(n,outFile);
    outFile<<endl;
    return 0;
}
