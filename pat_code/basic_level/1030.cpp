#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {

    int n;
    long long p;
    
    scanf("%d %lld", &n, &p);

    vector<long long> v(n);

    for(int i = 0; i < n; i++) {
        scanf("%lld", &v[i]);
    }

    sort(v.begin(), v.end());

    /*
        这里的做法是将第一次得到的最大数组长度向后传递
        因为第一次循环得到的v[count]一定会小于第二次的v[index] * p, 所以这中间的值不需要重复计算
        由此得到剪枝思路
    */
    int count = 0;
    for(int i = 0; i < n; i++) {
        long long max = v[i] * p;

        if(max > v[n-1]) {
            if(n - i > count) {
                count = n - i;
            }
            break;
        }

        for(int j = i + count; j < n; j++) {
            if(v[j] <= max) {
                if(j - i + 1 > count) {
                    count = j - i + 1;
                }
            } else {
                break;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}