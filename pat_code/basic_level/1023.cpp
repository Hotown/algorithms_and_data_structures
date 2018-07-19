#include<iostream>
using namespace std;

int main() {

    int count[10];

    int flag = 10;

    for(int i = 0; i < 10; i++) {
        cin >> count[i];
        if(i != 0 && count[i] != 0) {
            if(i <= flag) {
                flag = i;
            }
        }
    }

    cout << flag;
    count[flag]--;

    for(int i = 0; i < 10; i ++) {
        for(int j = 0; j < count[i]; j++) {
            cout << i;
        }
    }

    cout << endl;

    return 0;
}