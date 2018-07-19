#include <iostream>
using namespace std;

struct Student {
    string name;
    string major;
};

int main() {
    Student students[105];  
    int n;
    int highest = 0;
    int lowest = 100;
    string name;
    string major;
    int personScore;
    cin >> n;
    while(n--) {
        cin >> name >> major >> personScore;
        if(personScore > highest) {
            highest = personScore;
        }

        if(personScore < lowest) {
            lowest = personScore;
        }

        students[personScore].name = name;
        students[personScore].major = major;
    }

    cout<<students[highest].name<<" "<<students[highest].major<<endl;
    cout<<students[lowest].name<<" "<<students[lowest].major<<endl;

    return 0;
}