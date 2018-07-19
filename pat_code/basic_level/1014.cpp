#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main(){
    char a[60], b[60], c[60], d[60];
    char week, hour;
    int minute;
    int equals = 1;
    gets(a);
    gets(b);
    gets(c);
    gets(d);
    int len1 = strlen(a) > strlen(b) ? strlen(b) : strlen(a);
    for(int i = 0; i < len1; i++){
        if(equals == 1){
            if(a[i] >= 'A' && a[i] <= 'G' && b[i] >= 'A' && b[i] <= 'G'){
                if(a[i] == b[i]){
                    week = a[i];
                    equals++;
                }
            }
        }
        else if(equals == 2){
            if(((a[i] >= '0' && a[i] <= '9') || (a[i] >= 'A' && a[i] <= 'N')) && ((b[i] >= '0' && b[i] <= '9') || (b[i] >= 'A' && b[i] <= 'N'))){
                if(a[i] == b[i]){
                    hour = a[i];
                    break;
                }
            }
        }
    }
    int len2 = strlen(c) > strlen(d) ? strlen(d) : strlen(c);
    for(int j = 0; j < len2; j++){
        if(((c[j] >= 'a' && c[j] <= 'z') || (c[j] >= 'A' && c[j] <= 'Z')) && ((d[j] >= 'a' && d[j] <= 'z') || (d[j] >= 'A' && d[j] <= 'Z'))){
            if(c[j] == d[j]){
                minute = j;
                break;
            }
        }
    }
    switch(week){
        case 'A': printf("MON ");break;
        case 'B': printf("TUE ");break;
        case 'C': printf("WED ");break;
        case 'D': printf("THU ");break;
        case 'E': printf("FRI ");break;
        case 'F': printf("SAT ");break;
        case 'G': printf("SUN ");break;
    }
    if(hour >= '0' && hour <= '9'){
        printf("0%c:", hour);
    }
    else if(hour >= 'A' && hour <= 'N'){
        switch(hour){
            case 'A': printf("10:");break;
            case 'B': printf("11:");break;
            case 'C': printf("12:");break;
            case 'D': printf("13:");break;
            case 'E': printf("14:");break;
            case 'F': printf("15:");break;
            case 'G': printf("16:");break;
            case 'H': printf("17:");break;
            case 'I': printf("18:");break;
            case 'J': printf("19:");break;
            case 'K': printf("20:");break;
            case 'L': printf("21:");break;
            case 'M': printf("22:");break;
            case 'N': printf("23:");break;
        }
    }
    printf("%02d\n", minute);
    return 0;
}