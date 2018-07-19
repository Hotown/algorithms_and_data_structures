#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char c[105];
    while (n--)
    {
        cin >> c;
        bool flag = false;
        int numP = 0;
        int numT = 0;
        int positionP = 0;
        int positionT = 0;
        for (int i = 0; i < strlen(c); i++)
        {
            if (c[i] == 'P')
            {
                numP++;
                positionP = i;
            }
            else if (c[i] == 'T')
            {
                numT++;
                positionT = i;
            }

            if (numP > 1 || numT > 1)
            {
                flag = true;
            }

            if (c[i] != 'P' && c[i] != 'A' && c[i] != 'T')
            {
                flag = true;
            }
        }

        if (flag)
        {
            cout << "NO" << endl;
            continue;
        } else {
            if(positionT - positionP < 2) {
                cout << "NO" << endl;
                continue;
            }

            // 找一下规律，条件(3) => a*b=c, 刚开始就在这里疯狂WA。。
            if(positionP * (positionT - positionP - 1) == strlen(c) - positionT - 1) {
                cout << "YES" << endl;
                continue;
            } else {
                cout<< "NO" << endl;
                continue;
            }
        }

        
    }

    return 0;
}