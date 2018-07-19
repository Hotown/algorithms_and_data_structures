#include<iostream>
using namespace std;

struct info {
    char name[10];
    int year;
    int month;
    int day;
};

int compare(const void *a_t, const void *b_t) {
    info *a = (info*)a_t, *b = (info*)b_t;
    if(a->year != b->year) {
        return a->year - b->year;
    } else if (a->month != b->month) {
        return a->month - b->month;
    } else {
        return a->day - b->day;
    }
}

int main() {

    int n;
    
    cin >> n;

    // 出生日期应该在 1814.9.6到2014.9.6之间
    info infos[n], first = {"youngest", 2014, 9, 6}, last = {"oldest", 1814, 9, 6};

    int count = 0;

    for(int i = 0; i < n; i++) {
        scanf("%s %d/%d/%d", infos[count].name, &infos[count].year,
                                                &infos[count].month,
                                                &infos[count].day);
        if(compare(&infos[count], &first) > 0 || compare(&infos[count], &last) < 0) {
            continue;
        }
        count++;
    }
    qsort(infos, count, sizeof(infos[0]), compare);
    if(count == 1) {
        printf("1 %s %s\n", infos[0].name, infos[0].name);
    } else if(count > 1) {
        printf("%d %s %s\n", count, infos[0].name, infos[count-1].name);
    } else {
        printf("0\n");
    }
    
    return 0;
}