#include <stack.h>
#include <cstdio>

using namespace std;

SqStack s;

void conversion(int n) {
    SElemType e;
    initStack(s);
    while(n) {
        push(s, n % 8);
        n /= 8;
    }

    while(!stackEmpty(s)) {
        pop(s, e);
        printf("%d", e);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    conversion(n);
    return 0;
}