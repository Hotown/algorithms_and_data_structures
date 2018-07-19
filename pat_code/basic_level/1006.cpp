#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char c[3];
    int num[3];
    cin >> c;
    int length = strlen(c);
    if (length == 2)
    {
        num[1] = c[1] - '0';
        num[0] = c[0] - '0';

        while (num[0]--)
        {
            cout << "S";
        }

        for (int i = 1; i <= num[1]; i++)
        {
            cout << i;
        }

        cout << endl;
    }
    else if (length == 3)
    {
        num[2] = c[2] - '0';
        num[1] = c[1] - '0';
        num[0] = c[0] - '0';

        while (num[0]--)
        {
            cout << "B";
        }

        while (num[1]--)
        {
            cout << "S";
        }

        for (int i = 1; i <= num[2]; i++)
        {
            cout << i;
        }
        cout << endl;
    }
    else if (length == 1)
    {
        num[0] = c[0] - '0';

        for (int i = 1; i <= num[0]; i++)
        {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}