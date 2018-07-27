//
// Created by Hotown on 2018/7/25.
//
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

struct node{
    int start;
    int service;
}temp;

bool cmp(node a, node b) {
    return a.start < b.start;
}

int main() {
//    freopen("in.txt", "r", stdin);

    int n, k;
    vector<node> customer;
    double res = 0;
    cin >> n >> k;
    while(n--) {
        int hh, mm, ss, time;
        int start_time;
        scanf("%d:%d:%d %d", &hh, &mm, &ss, &time);
        if (time > 60)
            time = 60;
        start_time = hh * 3600 + mm * 60 + ss;
        if (start_time > 61200)
            continue;
        temp = {start_time, time * 60};
        customer.push_back(temp);
    }
    sort(customer.begin(), customer.end(), cmp);
    vector<int> windows(k, 28800);
    for (int i = 0; i < customer.size(); ++i) {
        int min_index = 0;
        int min_time = windows[0];
        for (int j = 1; j < k; ++j) {
            if (min_time > windows[j]) {
                min_time = windows[j];
                min_index = j;
            }
        }
        if (windows[min_index] <= customer[i].start) {
            windows[min_index] = customer[i].start + customer[i].service;
        } else {
            res += (windows[min_index] - customer[i].start);
            windows[min_index] += customer[i].service;
        }
    }
    if(customer.size() == 0)
        printf("0.0");
    else
        printf("%.1f", res / 60.0 / customer.size());

    return 0;

}





