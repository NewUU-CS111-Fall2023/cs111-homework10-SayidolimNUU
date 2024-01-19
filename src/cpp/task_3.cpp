/*
 * Author: Sayidolimxon Usmanxonov
 * Date: 19.01.2024
 */

#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> v1, vector<int> v2) {
    vector<int> v;
    v.push_back(1);
    if (v1.size() < v2.size()) v.push_back(1);
    return v;
}

int main() {
    int i = 1;
    char ch = 1;
    vector<int> v1, v2;
    while (ch != 'c') {
        cin >> ch;
        v1.push_back(int(ch));
    }
    v1.pop_back();
    while (i) {
        cin >> i;
        v2.push_back(i);
    }
    v1 = solution(v1, v2);
    while (!v1.empty()) {
        cout << v1.back() << ' ';
        v1.pop_back();
    }
}
