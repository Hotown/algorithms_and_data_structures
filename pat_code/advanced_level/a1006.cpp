#include<iostream>
#include<vector>
using namespace std;

struct person {
    string number;
    int in_time;
    int out_time;
};

int main() {

    int n;

    char ts[15];
    int ih, im, is;
    int oh, om, os;

    person early = {"", 999999, 0};
    person late = {"", 999999, 0};


    scanf("%d", &n);

    // vector<person> p;

    for(int i = 0; i < n; i++) {
        scanf("%s %d:%d:%d %d:%d:%d", ts, &ih, &im, &is, &oh, &om, &os);
        int in_time = is+im*60+ih*3600;
        int out_time = os+om*60+oh*3600;
        string s = ts;
        if(in_time < early.in_time) {
            early.number = s;
            early.in_time = in_time;
        }
        if(out_time > late.out_time) {
            late.number = s;
            late.out_time = out_time;
        }
    }

    cout << early.number << " " << late.number;

    return 0;
}