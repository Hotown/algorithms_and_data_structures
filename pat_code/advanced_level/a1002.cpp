#include<iostream>
using namespace std;

int main() {

    int k1, k2;
    int t;
    float num;
    float c[1001] = {0};

    scanf("%d", &k1);

    for(int i = 0; i < k1; i++) {
        scanf("%d%f", &t, &num);
        c[t] += num;
    }

    scanf("%d", &k2);

    for(int i = 0; i < k2; i++) {
        scanf("%d%f", &t, &num);
        c[t] += num;
    }

    int count = 0;
    for(int i = 0; i < 1001; i++) {
        if(c[i] != 0) {
            count ++;
        }
    }
    printf("%d", count);

    for(int i = 1000; i >= 0; i--) {
        if(c[i] != 0) {
            printf(" %d %.1f", i, c[i]);
        }
    }

    return 0;
}


