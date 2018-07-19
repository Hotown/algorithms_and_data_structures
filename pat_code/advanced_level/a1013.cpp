#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int cities[1001][1001];
bool visit[1001];
int n;

void dfs(int node) {
    visit[node] = true;
    for(int i = 1; i <= n; ++i) {
        if(visit[i] == false && cities[node][i] == 1)
            dfs(i);
    }
}

int main() {
    int m, k, a, b;

    scanf("%d%d%d", &n, &m, &k);

    for(int i = 0; i < m; ++i) {
        scanf("%d%d", &a, &b);
        cities[a][b] = 1;
        cities[b][a] = 1;
    }

    for(int i = 0; i < k; ++i) {
        int cnt = 0;
        fill(visit, visit + 1001, false);
        scanf("%d", &a);
        visit[a] = true;
        for (int j = 1; j <= n; ++j) {
            if(visit[j] == false) {
                dfs(j);
                cnt++;
            }
        }
        printf("%d\n", cnt - 1);
    }

    return 0;
}