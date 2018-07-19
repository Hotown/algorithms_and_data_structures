#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct Cake {
    float total;
    float price;
    float w;
};

bool cmp(Cake a, Cake b) {
    return a.w > b.w;
}

int main() {

    int n, maxx;

    float sum = 0;

    cin >> n >> maxx;

    vector<Cake> cakes;
    
    for(int i = 0; i < n; i++) {
        Cake cake;
        cin >> cake.total;
        cakes.push_back(cake);
    }
    
    for(int i = 0; i < n; i++) {
        float price;
        cin >> price;
        cakes[i].price = price;
        cakes[i].w = price * 1.0 / cakes[i].total;
    }

    sort(cakes.begin(), cakes.begin()+cakes.size() ,cmp);

    for(int i = 0; i < cakes.size(); i++) {
        if(maxx - cakes[i].total >= 0) {
            maxx = maxx - cakes[i].total;
            sum += cakes[i].price;
        } else {
            sum += cakes[i].w * maxx;
            break;
        }
    }

    printf("%.2f\n", sum);

    // for(int i = 0; i < n; i++) {
    //     cout << cakes[i].total << " " <<cakes[i].price << " " << cakes[i].w<< endl;
    // }

    return 0;
}