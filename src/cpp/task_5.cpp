/*
 * Author: Sayidolimxon Usmanxonov
 * Date: 19.01.2024
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, sum = 0, k, c;
    cout << "Enter n:\n";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) cin >> arr[i];
    for (int i = 1; i < pow(2, n); ++i) {
        k = i;
        c = 0;
        sum = 0;
        for (int j = 0; j < n; ++j) {
            if (!k) break;
            sum += arr[n - j - 1] * (k % 2);
            c += k % 2;
            k /= 2;
        }
        if (sum == 0 && c == 3) {
            cout << "True\n";
            return 0;
        }
    }
    cout << "False\n";
    return 0;
}
