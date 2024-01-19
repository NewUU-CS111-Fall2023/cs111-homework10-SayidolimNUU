/*
 * Author: Sayidolimxon Usmanxonov
 * Date: 19.01.2024
 */


/* Turing Machine will:
 * state 1: if value is 1, go to right;
 *          if value is 0, switch it to 1 and start state 2;
 * state 2: if value is 1, go to right;
 *          if value is 0, go to left and start state 3;
 * state 3: change value to 0, go to left and start state 4;
 * state 4: change value to 0, go to left and start state 5;
 * state 3: go to left if 1, halt if 0;
 */


#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> v) {
    for (auto i : v) {
        if (!v.at(i)) v.at(i) = 1;
    }
    v.pop_back();
    v.pop_back();
    return v;
}

int main() {
    int i;
    vector<int> v;
    while (cin >> i) {
        v.push_back(i);
    }
    v = solution(v);
    for (auto i : v) {
        cout << v.at(i) << ' ';
    }
}
