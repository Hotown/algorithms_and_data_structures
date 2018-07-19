#include<iostream>
#include<stack>
using namespace std;

int main() {

    int a, b, d;

    stack<int> res;

    cin >> a >> b >> d;

    int sum = a + b;

    if(sum == 0) {
        cout << sum << endl;
        return 0;
    }

    while(sum) {
        res.push(sum%d);
        sum /= d;
    }

    while(!res.empty()) {
        cout<<res.top();
        res.pop();
    }
    cout << endl;

    return 0;
}