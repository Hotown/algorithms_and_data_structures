#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

struct pnode {
    string name;
    int status, month, day, hour, min, time;
};

bool cmp(pnode a, pnode b) {
    return a.name != b.name ? a.name < b.name : a.time < b.time;
}

double computeBill(pnode call, int * weight) {
    double total = call.day * 60 * weight[24] + weight[call.hour] * call.min;
    for (int i = 0; i < call.hour; i++)
        total += weight[i] * 60;
    return total / 100.0;
}

int main() {
    int weight[25] = {0}, n;

    for (int i = 0; i < 24; ++i) {
        scanf("%d", &weight[i]);
        weight[24] += weight[i];
    }

    scanf("%d", &n);

    vector<pnode> data(n);

    for (int i = 0; i < n; ++i) {
        cin >> data[i].name;
        scanf("%d:%d:%d:%d", &data[i].month, &data[i].day, &data[i].hour, &data[i].min);
        string str_status;
        cin >> str_status;
        data[i].status = str_status == "on-line" ? 1 : 0;
        data[i].time = data[i].day * 24 * 60 + data[i].hour * 60 + data[i].min;
    }

    sort(data.begin(), data.end(), cmp);

    map<string, vector<pnode> > bill;

    for (int i = 1; i < n; ++i) {
        if (data[i].name == data[i - 1].name && data[i - 1].status == 1 && data[i].status == 0) {
            bill[data[i - 1].name].push_back(data[i - 1]);
            bill[data[i].name].push_back(data[i]);
        }
    }

    for (auto it : bill) {
        vector<pnode> temp = it.second;
        cout << it.first;
        printf(" %02d\n", temp[0].month);
        double total = 0;
        for (int i = 1; i < temp.size(); i += 2) {
            double t = computeBill(temp[i], weight) - computeBill(temp[i - 1], weight);
            printf("%02d:%02d:%02d %02d:%02d:%02d %d $%.2f\n",
                    temp[i - 1].day, temp[i - 1].hour, temp[i - 1].min,
                    temp[i].day, temp[i].hour, temp[i].min, temp[i].time - temp[i - 1].time, t);
            total += t;
        }
        printf("Total amount: $%.2f\n", total);
    }

    return 0;
}

