#include <cstdio>
#include <cmath>

using namespace std;
int arr[20];
int len;

bool isPrime(int n) {
    if (n <= 1)
        return false;
    int mid = int(sqrt((n * 1.0)));
    for (int i = 2; i <= mid; ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}

void convert(int n, int radix) {
    len = 0;
    do {
        arr[len++] = n % radix;
        n /= radix;
    } while(n != 0);
}

int reconvert(int radix) {
    int res = 0;
    for(int i = len - 1; i >= 0 ; --i) {
        res += arr[i] * int(pow(radix, len - 1 - i));
    }
    return res;
}

int main() {
    int n, d;
    while (scanf("%d", &n) != EOF) {
        if (n < 0)
            break;
        scanf("%d", &d);
        if (!isPrime(n)) {
            printf("No\n");
            continue;
        }
        convert(n, d);

        n = reconvert(d);
        printf("%s", isPrime(n) ? "Yes\n" : "No\n");
    }

    return 0;
}