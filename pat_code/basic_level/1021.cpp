#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int main()
{
    char a[1005]; 
    cin >> a;

    sort(a, a + strlen(a));

    int sign = a[0]-'0';
    int count = 0;
    for (int i = 0; i < strlen(a)+1; i++)
    {
       if(sign == a[i]-'0') {
           count ++;
       }else {
           cout<<sign<<":"<<count<<endl;
           sign=a[i]-'0';
           count=1;
       }
    }

    return 0;
}