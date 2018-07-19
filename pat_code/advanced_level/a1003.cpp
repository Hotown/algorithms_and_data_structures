#include<iostream>
using namespace std;

const int INF = 99999;

/**
    分别表示邻接表，出发点到i的距离，点权重（救援队数量），到i点的最短路径数量，到i点的权重和
 */
int e[510][510], dis[510], point_w[510], num[510], sum_w[510];

bool s[510];

int n, m, c1, c2;

int main() {

    scanf("%d%d%d%d", &n , &m, &c1, &c2);

    for(int i = 0; i < n; i++) {
        scanf("%d", &point_w[i]);
    }

    fill(e[0], e[0]+510*510, INF);

    fill(dis, dis+510, INF);

    int a, b, c;

    for(int i = 0; i < m; i++) {
        scanf("%d%d%d", &a, &b, &c);
        e[a][b] = c;
        e[b][a] = c;
    }

    dis[c1] = 0;

    sum_w[c1] = point_w[c1];

    num[c1] = 1;

    for(int i = 0; i < n; i++) {
        int u = -1;
        int minn = INF;

        for(int j = 0; j < n; j++) {
            if(!s[j] && dis[j] < minn) {
                u = j;
                minn = dis[j];
            } 
        }

        if(u == -1)
            break;

        s[u] = true;

        for(int v = 0; v < n; v++) {
            if(!s[v] && e[u][v] != INF) {
                if(dis[u] + e[u][v] < dis[v]) {
                    dis[v] = dis[u] + e[u][v];
                    num[v] = num[u];
                    sum_w[v] = sum_w[u] + point_w[v];
                } else if (dis[u] + e[u][v] == dis[v]) {
                    num[v] = num[v] + num[u];
                    if(sum_w[u] + point_w[v] > sum_w[v]) {
                        sum_w[v] = sum_w[u] + point_w[v];
                    }
                }
            }
        }
    }

    printf("%d %d", num[c2], sum_w[c2]);

    return 0;
}