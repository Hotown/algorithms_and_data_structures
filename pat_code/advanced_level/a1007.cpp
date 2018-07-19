#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n;

    cin >> n;

    vector<int> v(n);
    // 子序列左下标，子序列右下标，子序列和，临时sum，临时index
    int l_index = 0, r_index = n - 1, sum = -1, temp = 0, t_index = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        temp = temp + v[i];
        if(temp < 0) {
            temp = 0;
            t_index = i+1;
        } else if(temp > sum) {
            sum = temp;
            l_index = t_index;
            r_index = i;
        }
    }
    if(sum < 0) {
        sum = 0;
    }

    printf("%d %d %d", sum, v[l_index], v[r_index]);

    return 0;
}