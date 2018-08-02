//
// Created by Hotown on 2018/8/2.
//

#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

struct person {
    int arrive_at, serve_at, time;
    bool is_vip;
}temp_person;

struct table {
    int end = 8 * 3600, num;
    bool vip;
};

vector<person> players;
vector<table> tables;

bool cmp1(person a, person b) {
    return a.arrive_at < b. arrive_at;
}

bool cmp2(person a, person b) {
    return a.serve_at < b.serve_at;
}

int find_vip(int vip_id) {
    vip_id++;
    while (vip_id < players.size() && !players[vip_id].is_vip)
        vip_id++;
    return vip_id;
}

void allocate(int person_id, int table_id) {
    if (players[person_id].arrive_at <= tables[table_id].end) {
        players[person_id].serve_at = tables[table_id].end;
    } else {
        players[person_id].serve_at = players[person_id].arrive_at;
    }
    tables[table_id].end = players[person_id].serve_at + players[person_id].time;
    tables[table_id].num++;
}

int main() {
    freopen("in.txt", "r", stdin);

    int n;
    scanf("%d", &n);
    int hh, mm, ss, quire, vip;
    while (n--) {
        scanf("%d:%d:%d %d %d", &hh, &mm, &ss, &quire, &vip);
        temp_person.arrive_at = hh * 3600 + mm * 60 + ss;
        if (temp_person.arrive_at >= 21 * 3600)
            continue;
        temp_person.serve_at = 21 * 3600;
        temp_person.time = quire > 120 ? 7200 : quire * 60;
        temp_person.is_vip = (vip == 1);
        players.push_back(temp_person);
    }

    int k, m;
    scanf("%d%d", &k, &m);
    tables.resize(k + 1);
    while (m--) {
        int number;
        scanf("%d", &number);
        tables[number].vip = true;
    }

    sort(players.begin(), players.end(), cmp1);

    int i = 0;
    int vip_id = -1;
    vip_id = find_vip(vip_id);
    while (i < players.size()) {
        int idx = -1;
        int min_time = 500000;
        for (int j = 1; j <= k; ++j) {
            if (tables[j].end < min_time) {
                idx = j;
                min_time = tables[j].end;
            }
        }

        if (min_time >= 21 * 3600)
            break;

        if (players[i].is_vip && i < vip_id) {  // vip插队以后的处理
            i++;
            continue;
        }

        if (tables[idx].vip) {
            if (players[i].is_vip) {
                allocate(i, idx);
                if (vip_id == i) {
                    vip_id = find_vip(vip_id);
                }
                i++;
            } else {
                if (vip_id < players.size() && players[vip_id].arrive_at <= tables[idx].end) {
                    allocate(vip_id, idx);
                    vip_id = find_vip(vip_id);
                } else {
                    allocate(i, idx);
                    i++;
                }
            }
        } else {
            if (!players[i].is_vip) {
                allocate(i, idx);
                i++;
            } else {
                int vip_table_idx = -1;
                int vip_table_min_time = 500000;
                for (int j = 1; j <= k; ++j) {
                    if (tables[j].vip && tables[j].end < vip_table_min_time) {
                        vip_table_min_time = tables[j].end;
                        vip_table_idx = j;
                    }
                }
                if (vip_table_idx != -1 && players[i].arrive_at >= tables[vip_table_idx].end) {
                    allocate(i, vip_table_idx);
                    if (vip_id == i)
                        vip_id = find_vip(vip_id);
                    i++;
                } else {
                    allocate(i, idx);
                    if (vip_id == i)
                        vip_id = find_vip(vip_id);
                    i++;
                }
            }
        }
    }

    sort(players.begin(), players.end(), cmp2);

    for(i = 0; i < players.size() && players[i].serve_at < 21 * 3600; i++) {
        printf("%02d:%02d:%02d ", players[i].arrive_at / 3600, players[i].arrive_at % 3600 / 60, players[i].arrive_at % 60);
        printf("%02d:%02d:%02d ", players[i].serve_at/ 3600, players[i].serve_at % 3600 / 60, players[i].serve_at % 60);
        printf("%.0f\n", round((players[i].serve_at - players[i].arrive_at) / 60.0));
    }

    for(int j = 1; j <= k; j++) {
        if(j != 1)
            printf(" ");
        printf("%d", tables[j].num);
    }

    return 0;
}