//
// Created by Hotown on 2018/8/1.
//

#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

struct node {
    long long id;
    int score;
    int final_rank;
    int location_num;
    int local_rank;
}temp_node;


bool cmp(node a, node b) {
    return a.score != b.score ? a.score > b.score : a.id < b.id;
}

int main() {
    freopen("in.txt", "r", stdin);

    int n, k;
    vector<node> rank;
    scanf("%d", &n);
    int local_idx[101];
    fill(local_idx, local_idx + 101, 1);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &k);
        for (int j = 0; j < k; ++j) {
            long long ltemp;
            int temp;
            scanf("%lld %d", &ltemp, &temp);
            temp_node = node{ltemp, temp, 0, i, 0};
            rank.push_back(temp_node);
        }
    }

    sort(rank.begin(), rank.end(), cmp);

    int final_idx = 2;
    rank[0].final_rank = 1;
    rank[0].local_rank = 1;
    local_idx[rank[0].location_num]++;
    for (auto i = 1; i < int(rank.size()); ++i) {
        if (rank[i].score == rank[i - 1].score) {
            rank[i].final_rank = rank[i - 1].final_rank;
            final_idx ++;
            if (rank[i].location_num == rank[i - 1].location_num) {
                rank[i].local_rank = rank[i - 1].local_rank;
                local_idx[rank[i].location_num]++;
            } else {
                rank[i].local_rank = local_idx[rank[i].location_num];
                local_idx[rank[i].location_num]++;
            }

        } else {
            rank[i].final_rank = final_idx;
            final_idx++;
            rank[i].local_rank = local_idx[rank[i].location_num];
            local_idx[rank[i].location_num]++;
        }
    }

    printf("%ld\n", rank.size());
    for (node i : rank) {
        printf("%013lld %d %d %d\n", i.id, i.final_rank, i.location_num, i.local_rank);
    }

    return 0;
}