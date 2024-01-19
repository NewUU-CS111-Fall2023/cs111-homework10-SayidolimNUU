/*
 * Author: Sayidolimxon Usmanxonov
 * Date: 19.01.2024
 */


/* Turing Machine will:
 * state 1: go to right if faces non-zero values;
 *          when faces 0, switch to state 2 and goes to the left;
 * state 2: moves to the left if faces 0;
 *          switch to state n if faces non-zero;
 * states n-m: add the current node to the node to the left and makes current node's value = 0
 *                                                       if it's non-zero and moves to the left;
 *          if faces 0, moves to the right and starts next state;
 *          next state moves to the right until non-zero, when it starts state 2;
 */


#include <iostream>
#include <queue>

using namespace std;

queue<int> solution(queue<int> v) {
    int sum = 0;
    queue<int> ans;
    v.pop();
    while (!v.empty()) {
        sum += v.front();
        v.pop();
        if (v.front() == 0) {
            ans.push(sum);
            sum = 0;
        }
    }
    return ans;
}

int main() {
    int i;
    queue<int> v;
    cout << "To show the end of input, enter -1\n";
    while (cin >> i) {
        if (i == -1) break;
        v.push(i);
    }
    v = solution(v);
    while (!v.empty()) {
        cout << v.front() << ' ';
        v.pop();
    }
}
