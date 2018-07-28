//
// Created by Hotown on 2018/7/28.
//
#include <cstdio>
#include <stack>

using namespace std;

#define MAXN 1000000

int poster[MAXN + 1];
int in[MAXN + 1];
int tree[MAXN + 1] = { -1 };

void search(int root, int start, int end, int idx) {
    if (start > end)
        return;
    int i = start;
    while (i < end && in[i] != poster[root])
        i++;
    tree[idx] = poster[root];
    search(root - (end - i + 1), start, i - 1, idx * 2 + 1);
    search(root - 1, i + 1, end, idx * 2 + 2);
}

int main() {
    freopen("in.txt", "r", stdin);

    int n;
    int index = 0;
    int cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        index++;
        scanf("%d", &poster[i]);
    }
    for (int i = 0; i < n; ++i) {
        scanf("%d", &in[i]);
    }
    search(index - 1, 0, index - 1, 0);
    for (int i = 0; i < MAXN + 1; ++i) {
        if (tree[i] > 0) {
            if (cnt != 0)
                printf(" ");
            printf("%d", tree[i]);
            cnt++;
        }
    }
    return 0;
}
