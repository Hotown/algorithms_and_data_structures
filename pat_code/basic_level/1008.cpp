#include <iostream>
using namespace std;
int main()
{
    int a[300];
    int m, n;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int temp = 0;
    int j = 0;
    for (int i = n; i >= 0; i--)
        a[i + m] = a[i]; //向后移m位
    int i = n;
    for (i = n; i < n + m; i++)
        a[i % n] = a[i];
    cout << a[0];
    for (int j = 1; j < n; j++)
        cout << " " << a[j];
    return 0;
}