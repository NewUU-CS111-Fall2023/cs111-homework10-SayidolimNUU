/*
 * Author: Sayidolimxon Usmanxonov
 * Date: 19.01.2024
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, sum = 0, k, realSum = 0;
    cout << "Enter n:\n";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        realSum += arr[i];
    }
    for (int i = 1; i < pow(2, n); ++i) {
        k = i;
        sum = 0;
        for (int j = 0; j < n; ++j) {
            if (!k) break;
            sum += arr[n - j - 1] * (k % 2);
            k /= 2;
        }
        if (sum * 2 == realSum) {
            cout << "True\n";
            return 0;
        }
    }
    cout << "False\n";
    return 0;
}
