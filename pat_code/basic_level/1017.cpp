#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    char a[1000];
    int b;
    scanf("%s %d", a, &b);
    char quotient[1000];
    int rest = 0;
    for (int i = 0; i != strlen(a); i++)
    {
        quotient[i] = ((rest * 10 + a[i] - 48) / b) + 48;
        rest = (rest * 10 + (a[i] - 48)) % b;
    }
    if (quotient[0] == '0' && quotient[1] != 0)
    {
        printf("%s", quotient + 1);
    }
    else
    {
        printf("%s", quotient);
    }
    printf(" %d\n", rest);
    return 0;
}