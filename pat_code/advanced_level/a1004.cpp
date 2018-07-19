/**
 * 根据题意，其实就是一个搜索每层叶子节点数，并输出
 */

#include<iostream>
#include<vector>
using namespace std;

vector<int> v[101];
int book[101], max_depth = -1;

void dfs(int index, int depth) {
    // 没有子节点，说明是一个叶子节点，该层叶子节点数+1，更新最大深度
    if(v[index].size() == 0) {
        book[depth]++;
        max_depth = max(max_depth, depth);
        return ;
    }
    for(int i = 0; i < v[index].size(); i++) {
        dfs(v[index][i], depth+1);
    }
}

int main() {

    int n, m, k, id;
    int node;

    scanf("%d %d", &n, &m);

    for(int i = 0; i < m; i++) {
        scanf("%d %d", &node, &k);
        for(int j = 0; j < k; j++) {
            scanf("%d", &id);
            v[node].push_back(id);
        }
    }

    dfs(1,0);
    printf("%d", book[0]);
    for(int i = 1; i <=max_depth; i++) {
        printf(" %d", book[i]);
    }
    return 0;
}