//
// Created by Hotown on 2018/7/29.
//

#include <cstdio>
#include <vector>

using namespace std;

#define MAX_V 10005

vector<int> G[MAX_V];
int visit[MAX_V];

void dfs(int root, int deep) {
    if (visit[root] > 0)
        return;
    visit[root] = deep;
    if (G[root].size() == 0)
        return;
    for (int i = 0; i < int(G[root].size()); ++i) {
        dfs(G[root][i], deep + 1);
    }
}

int main() {
    // freopen("in.txt", "r", stdin);

    int n;
    int count = 0;
    fill(visit, visit + MAX_V, 0);
    scanf("%d", &n);

    for (int i = 0; i < n - 1; ++i) {
        int s, t;
        scanf("%d%d",&s ,&t);
        G[s].push_back(t);
        G[t].push_back(s);
    }

    for (int i = 1; i <= n; ++i) {
        if (!visit[i]) {
            dfs(i, 1);
            count++;
        }
    }

    if (count > 1)
        printf("Error: %d components", count);
    else {
        int idx = 0;
        int max_deep = 0;
        bool res[MAX_V];
        fill(res, res + MAX_V, false);

        for (int i = 1; i <= n; ++i) {
            if (visit[i] > max_deep) {
                max_deep = visit[i];
                idx = i;
            }
        }

        for (int i = 1; i <= n; ++i) {
            if (visit[i] == max_deep)
                res[i] = true;
        }

        fill(visit, visit + MAX_V, 0);
        dfs(idx, 1);
        for (int i = 1; i <= n; ++i) {
            if (visit[i] > max_deep) {
                max_deep = visit[i];
            }
        }
        for (int i = 1; i <= n; ++i) {
            if (visit[i] == max_deep)
                res[i] = true;
        }
        for (int i = 1; i <= n; ++i) {
            if (res[i])
                printf("%d\n", i);
        }
    }

    return 0;
}