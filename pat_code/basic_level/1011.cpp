#include <iostream>
using namespace std;

int main()
{
    int T;
    long a, b, c;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        cin >> a >> b >> c;
        cout << "Case #" << i << ": " << (a + b > c ? "true" : "false") << endl;
    }
    return 0;
}