#include <iostream>
using namespace std;
int main()
{

    int m, n;
    cin >> m >> n;

    bool temp[500000] = {false};

    temp[0] = true;
    temp[1] = true;

    for (int i = 2; i <= 500000 / 2 + 1; i++)
    {
        if (temp[i] == false)
        {
            for (int j = 2; j * i <= 500000; j++)
            {
                temp[i * j] = true;
            }
        }
    }

    int result[100005];

    int j = 0;

    for (int i = 0; i < 500000; i++)
    {
        if (temp[i] == false)
        {
            result[j] = i;
            j++;
        }
    }

    int count = 0;

    for (int i = m - 1; i < n; i++)
    {
        if (count % 10 != 0)
        {
            cout << " ";
        }
        cout << result[i];
        count++;
        if (count % 10 == 0)
        {
            cout << endl;
        }
    }
    if (count % 10 != 0)
    {
        cout << endl;
    }

    return 0;
}
