//
// Created by Hotown on 2018/8/1.
//

#include <iostream>
#include <algorithm>

using namespace std;

void add(string t, string &n) {
    int length = t.size();
    bool carry = false;
    for (int i = 0; i < length; ++i) {
        n[i] += t[i] + int(carry) - '0';
        if (n[i] > '9') {
            n[i] -= 10;
            carry = true;
        } else {
            carry = false;
        }
    }
    if (carry)
        n.push_back('1');
    reverse(n.begin(), n.end());
}

int main() {
    //freopen("in.txt", "r", stdin);

    int k, i;
    string n;
    cin >> n >> k;
    for (i = 0; i <= k; ++i) {
        string t = n;
        reverse(t.begin(), t.end());
        if (t == n || i == k)
            break;
        add(t, n);
    }
    cout << n << endl << i;
    return 0;
}