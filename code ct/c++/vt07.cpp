#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> x;
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            cout << i << " ";
            found = true;
        }
    }
    if (!found) {
        cout << -1;
    }
    return 0;
}
