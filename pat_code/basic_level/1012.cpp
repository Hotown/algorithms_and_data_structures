#include<iostream>
#include<cstdio>
using namespace std;
int main() {

    int n, a;

    int sum = 0;
    int crossSum = 0;
    int count = 0;
    int averageSum = 0;
    double average = 0;
    int maxNumber = -1;

    int countA1 = 0;
    int countA2 = 0;
    int countA3 = 0;
    int countA4 = 0;
    int countA5 = 0;

    cin >> n;

    while(n--) {
        cin >> a;
        if(a%10 == 0) {
            countA1++;
            sum += a;
        } else if (a%5 == 1) {
            countA2++;
            if(countA2 % 2 == 1) {
                crossSum += a;
            } else {
                crossSum -= a;
            }
        } else if (a%5 == 2) {
            countA3++;
            count++;
        } else if(a%5 == 3) {
            countA4++;
            averageSum += a;
        } else if (a%5 == 4) {
            countA5++;
            if(a >= maxNumber) {
                maxNumber = a;
            }
        }
    }

    if(countA1 == 0) {
        cout << "N "; 
    } else {
        cout << sum << " ";
    }

    if(countA2 == 0) {
        cout << "N ";
    }else {
        cout << crossSum <<" ";
    }

    if(countA3 == 0) {
        cout << "N ";
    }else {
        cout << count << " "; 
    }

    if(countA4 == 0) {
        cout << "N ";
    }else {
        average = averageSum / (countA4 * 1.0);
        printf("%.1f ", average);
    }

    if(countA5 == 0) {
        cout << "N" << endl;
    } else {
        cout << maxNumber << endl;
    }

    return 0;
}