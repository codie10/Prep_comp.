#include <bits/stdc++.h>
using namespace std;

int rankk(int a[], int n) {
    int p = 0;
    for (int i = 1; i < n; i++) { 
        if (a[i] < a[i - 1]) {
            a[i - 1] = a[i]; 
            p ++;;
        }
    }
    return p;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int a[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = rankk(a, n);
    cout << "Result: " << ans << endl;

    return 0;
}
