#include <iostream>
using namespace std;

int main() {
    int c1, c2;
    int myruntime;
    cin >> c1 >> c2;
    myruntime = (c2 - c1 + 55) / 100;
    int sec;
    int min;
    int hour;
    sec = myruntime % 60;
    myruntime /= 60;
    min = myruntime % 60;
    myruntime /= 60;
    hour = myruntime;

    if(hour < 10) {
        cout<<"0"<<hour;
    } else {
        cout<<hour;
    }

    if(min < 10) {
        cout<<":0"<<min;
    } else {
        cout<<":"<<min;
    }

    if(sec < 10) {
        cout<<":0"<<sec;
    } else {
        cout<<":"<<sec;
    }

    cout<<endl;
    
    return 0;
}