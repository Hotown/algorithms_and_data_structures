#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int, int> P;

P addr[100000];

struct node{
    int address, data, next;
};

int main(){
    int start, n, k, address, data, next;
    scanf("%d %d %d", &start, &n, &k);
    vector<node> list;
    for(int i = 0; i < n; ++i){
        scanf("%d %d %d", &address, &data, &next);
        P p;
        p.first = data;
        p.second = next;
        addr[address] = p;
    }
    int tmp = start;
    while(tmp != -1){
        node n;
        n.address = tmp;
        n.data = addr[tmp].first;
        n.next = addr[tmp].second;
        list.push_back(n);
        tmp = n.next;
    }
    for(int l = 0, index = 0; l < list.size() / k; ++l){
        reverse(list.begin() + index, list.begin() + index + k);
        index += k;
    }
    int o = 0;
    for(; o < list.size() - 1; ++o){
        printf("%05d %d %05d\n", list[o].address, list[o].data, list[o + 1].address);
    }
    printf("%05d %d -1\n", list[o].address, list[o].data);
    return 0;
}