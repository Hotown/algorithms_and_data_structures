//
// Created by Hotown on 2018/7/26.
//
#include <cstdio>
#include <queue>
#include <vector>


using namespace std;

struct node {
    int pop_time;
    int end_time;
    queue<int> window_q;
};


int main() {

    //freopen("in.txt", "r", stdin);

    int n, m, k, q;
    int index = 0;


    scanf("%d%d%d%d", &n, &m, &k, &q);
    vector<int> custom(k + 1);
    vector<int> res(k + 1);
    vector<bool> sorry(k + 1, false);

    for (int i = 0; i < k; ++i) {
        scanf("%d", &custom[i]);
    }

    vector<node> window(n + 1);

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (index < k) {
                window[j].window_q.push(custom[index]);
                if (window[j].end_time >= 540)
                    sorry[index] = true;
                window[j].end_time += custom[index];
                if (i == 0)
                    window[j].pop_time = custom[index];
                res[index] = window[j].end_time;
                index++;
            }
        }
    }

    while (index < k) {
        int min_time = window[0].pop_time;
        int min_index = 0;
        for (int i = 1; i < n; ++i) {
            if (window[i].pop_time < min_time) {
                min_time = window[i].pop_time;
                min_index = i;
            }
        }
        window[min_index].window_q.push(custom[index]);
        window[min_index].window_q.pop();
        window[min_index].pop_time += window[min_index].window_q.front();
        if (window[min_index].end_time >= 540) {
            sorry[index] = true;
        }
        window[min_index].end_time += custom[index];
        res[index] = window[min_index].end_time;
        index++;
    }

    for (int i = 0; i < q; ++i) {
        int query;
        int time = 0;
        scanf("%d", &query);
        query -= 1;
        time = res[query] + 480;
        if (sorry[query]) {
            printf("Sorry\n");
        } else {
            printf("%02d:%02d\n", time / 60, time % 60);
        }
    }

    return 0;
}
