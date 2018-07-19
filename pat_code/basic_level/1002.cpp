#include <iostream>
#include <sstream>
#include <cstring>
#include <stdio.h>
using namespace std;

int main()
{
    char c[103];
    int sum = 0;
    gets(c);
    for (int i = 0; i < strlen(c); i++)
    {
        sum += (c[i] - '0');
    }
    stringstream ss;
    ss << sum;
    string s = ss.str();
    for (int i = 0; i < s.size(); i++)
    {
        switch (s[i])
        {
        case '0':
            cout << "ling";
            break;
        case '1':
            cout << "yi";
            break;
        case '2':
            cout << "er";
            break;
        case '3':
            cout << "san";
            break;
        case '4':
            cout << "si";
            break;
        case '5':
            cout << "wu";
            break;
        case '6':
            cout << "liu";
            break;
        case '7':
            cout << "qi";
            break;
        case '8':
            cout << "ba";
            break;
        case '9':
            cout << "jiu";
            break;
        default:
            break;
        }

        if (i != s.size()-1)
        {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}