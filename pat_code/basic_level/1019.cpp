#include<iostream>
#include<algorithm>
using namespace std;

int cmp(char a, char b) {
    return a > b;
}

int main() {

    int n ;

    cin >> n;

    if(n % 1111 == 0) {
        printf("%d - %d = 0000\n", n, n);
        return 0;
    }

    // char temp[4] = {'0', '0', '0', '0'};

    // int j = 0;

    // while(n != 0) {
    //     temp[j] = n%10+'0';
    //     j++;
    //     n /= 10;
    // }

    // sort(temp, temp+j+1, cmp);

    // for(int i = 0; i < 4; i++) {
    //     cout<<temp[i];
    // }

    while(true) {
        char temp[4] = {'0', '0', '0', '0'};

        int j = 0;

        while(n != 0) {
            temp[j] = n%10+'0';
            j++;
            n /= 10;
        }

        sort(temp, temp+j+1, cmp);

        int num1 = (temp[0]-'0')*1000 + (temp[1]-'0')*100 + (temp[2]-'0')*10 + temp[3]-'0';
        int num2 = temp[0]-'0' + (temp[1]-'0')*10 + (temp[2]-'0')*100 + (temp[3]-'0')*1000;

        if(num1 - num2 != 6174) {
            printf("%04d - %04d = %04d\n", num1, num2, num1-num2);
            n = num1 - num2;
        } else {
            printf("%04d - %04d = %04d\n", num1, num2, num1-num2);
            break;
        }
    }

    return 0;
}