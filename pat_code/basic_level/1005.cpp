#include<iostream>
#include<vector>
using namespace std;

bool number[10000] = {false};

int main() {
    int n;
    
    int a;
    int min = 1000;
    vector<int> result;
    cin >> n;

    while(n--) {
        cin >> a;
        if(a <= min) {
            min = a;
        }
        number[a] = true;
    }

    for(int i = min; i < 101; i++) {
        if(number[i] == true) {
            int temp = i;
            while(temp != 1) {
                if(temp%2 == 0) {
                    number[temp/2] = false;
                    temp = temp/2;
                } else {
                    number[(temp*3+1)/2] = false;
                    temp = (temp*3+1)/2;
                }
            }
        }
    }

    for(int i = 101; i > 0; i--){
        if(number[i] == true){
            result.push_back(i);
        }
    }

    for(int i = 0; i < result.size(); i++) {
        if(i != result.size()-1) {
            cout << result[i] << " ";
        }else {
            cout << result[i] <<endl;
        }
    }

    return 0;
}