#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;

int main()
{
    char a[11], b[11];
    char da, db;
    int count1 = 0, count2 = 0;
    int sum1 = 0, sum2 = 0;
    scanf("%s %c %s %c", a, &da, b, &db);
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == da)
        {
            count1++;
        }
    }
    for (int j = 0; j < count1; j++)
    {
        sum1 += (int)(da - '0') * pow((double)10, j);
    }
    for (int i = 0; i < strlen(b); i++)
    {
        if (b[i] == db)
        {
            count2++;
        }
    }
    for (int j = 0; j < count2; j++)
    {
        sum2 += (int)(db - '0') * pow((double)10, j);
    }
    printf("%d\n", sum1 + sum2);
    
    return 0;
}
