#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    long long int price, number, result = 1;
    cin >> price >> number;
    result = price * number;
    
    if (number >= 20)
    {
        result -= result * 0.07;
    }
    else if (number >= 10)
    {
        result -= result * 0.03;
    }
    
    cout << result;

    return 0;
} 
