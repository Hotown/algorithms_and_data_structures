#include <cstdio>  
#include <algorithm>  
#include <cstring>  
using namespace std;  
struct student{  
    char id[10];  
    int de;  
    int cai;  
    int flag;  
    int sum;  
}stu[100010];  
bool cmp(student a, student b){  
    if(a.flag != b.flag) return a.flag < b.flag;  
    else if(a.sum != b.sum) return a.sum > b.sum;  
    else if(a.de != b.de) return a.de > b.de;  
    else return strcmp(a.id, b.id) < 0;  
}  
int main(){  
    int n, l, h, num = 0;  
    scanf("%d %d %d", &n, &l, &h);  
    while(n--) {  
        scanf("%s %d %d", &stu[num].id, &stu[num].de, &stu[num].cai);  
        if(stu[num].de < l || stu[num].cai < l) continue;  
        else {  
            stu[num].sum = stu[num].de + stu[num].cai;  
            if(stu[num].de >= h && stu[num].cai >= h) stu[num].flag = 1;  
            else if(stu[num].de >= h && stu[num].cai < h) stu[num].flag = 2;  
            else if(stu[num].de >= stu[num].cai) stu[num].flag = 3;  
            else stu[num].flag = 4;  
            num++;   
        }  
    }  
      
    sort(stu, stu + num, cmp);  
    printf("%d\n", num);  
    for(int i = 0; i < num; i++) {  
        printf("%s %d %d\n", stu[i].id, stu[i].de, stu[i].cai);  
    }  
    return 0;  
}  