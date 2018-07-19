#include<iostream>
using namespace std;
int main() {
    int a,b;
    if(cin >> a >> b) {
        if(b == 0) {
            cout << "0 0"<< endl;
            return 0;
        } else {
            cout << a * b << " "<< b-1;
        }
    }

    while(cin >> a >> b) {
        if(b == 0) {
            return 0;
        } else {
            cout << " " << a * b << " "<< b-1;
        }
    }
    return 0;
}