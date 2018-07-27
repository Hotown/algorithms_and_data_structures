//
// Created by Hotown on 2018/7/27.
//
#include <cstdio>
using namespace std;

#define MAXN 1002

int main() {
    //freopen("in.txt", "r", stdin);

    int n, b;

    scanf("%d%d", &n, &b);

    int st[MAXN];

    int index = 0;

    while(n) {
        st[index] = n % b;
        n /= b;
        index ++;
    }

    bool flag = true;

    if (index == 1){
        flag = true;
    } else {
        for (int i = 0; i < (index / 2); ++i) {
            if (st[i] != st[index - 1 - i]) {
                flag = false;
                break;
            }
        }
    }

    if (flag) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    for (int i = index - 1; i > 0; --i) {
        printf("%d ", st[i]);
    }
    printf("%d", st[0]);

    return 0;
}