#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n;
    int count = 0;
    int prev = 2;

    bool temp[100005] = {false};

    cin >> n;

    temp[0] = true;
    temp[1] = true;

    for (int i = 2; i <= n/2+1; i++)
    {
        if (temp[i] == false)
        {
            for (int j = 2; j * i <= n; j++)
            {
                temp[i * j] = true;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (temp[i] == false)
        {
            if ((i - prev) == 2)
            {
                count++;
                prev = i;
            }
            else
            {
                prev = i;
            }
        }
    }

    cout << count << endl;

    return 0;
}