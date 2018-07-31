//
// Created by Hotown on 2018/7/31.
//
#include <iostream>
#include <set>
using namespace std;
#define MAX_N 22

int main() {
    // freopen("in.txt", "r", stdin);

    string s;
    set<int> s1;
    set<int> s2;
    int num[MAX_N];
    fill(num, num + MAX_N, -1);
    getline(cin, s);
    auto length = int(s.size());
    for (int i = 0; i < length; ++i) {
        num[length - 1 - i] = s[i] - '0';
        s1.insert(s[i] - '0');
    }

    bool pre = false;   // 进位
    for (int i = 0; i < length; ++i) {
        if (num[i] * 2 > 9) {
            num[i] = !pre ? (num[i] * 2 - 10) : (num[i] * 2 - 9);
            s2.insert(num[i]);
            pre = true;
        } else {
            num[i] = !pre ? (num[i] * 2) : (num[i] * 2 + 1);
            s2.insert(num[i]);
            pre = false;
        }
    }

    bool flag = false;

    if (pre) {
        num[length] = 1;
        s2.insert(1);
        length++;
    }

    if (s1.size() != s2.size())
        flag = true;
    else {
        for (int i = 0; i < length; ++i) {
            if (s.find(char(num[i] + '0')) == string::npos) {
                flag = true;
                break;
            }
        }
    }

    if (flag)
        printf("No\n");
    else
        printf("Yes\n");

    for (int i = length; i >= 0; --i) {
        if (num[i] >= 0)
            printf("%d", num[i]);
    }

    return 0;
}

