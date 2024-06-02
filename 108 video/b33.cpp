#include<bits/stdc++.h>
using namespace std;

bool kiemtrasochan(int n) {
    long long int ln = 0;
    while (n != 0) {
        ln = n % 10;
        if (ln % 2 != 0) {
            return false; // If any digit is odd, return false immediately
        }
        n = n / 10;
    }
    return true; // If all digits are even, return true
}

int main() {
    long long int n;
    cin >> n;
    if (kiemtrasochan(n)) {
        cout << "toan la so chan";
    } else {
        cout << "co so le";
    }
    return 0;
}
