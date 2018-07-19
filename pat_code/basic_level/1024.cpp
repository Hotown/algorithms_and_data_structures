#include <cstdio>
#include <cstdlib>

int main(){
    char sciNum[10010];
    scanf("%s", &sciNum);

    int cursor = 0; // 游标
    int e = 0;  // 指数
    char eSign; // 指数符号

    // 定位到E
    while (sciNum[cursor] != 'E') {
        cursor++;
    }

    eSign = sciNum[cursor + 1];
    e = atoi(sciNum+cursor + 2);

    // 如果是负数,先输出负号
    if(sciNum[0] == '-') {
        printf("-");
    }

    // 如果指数负号为负
    if (eSign == '-') {
        printf("0.");
        // 输出e-2个0
        for(int i = 0; i < e - 1; i++){
            printf("0");
        }
        printf("%c", sciNum[1]);
        // 输出小数点之后的数
        for(int i = 3; i < cursor; i++){
            printf("%c", sciNum[i]);
        }
    } else {
        // 如果指数符号为正
        for(int i = 1;i < cursor; i++) {
            // 先跳过小数点
            if(sciNum[i] == '.') {
                continue;
            }
            printf("%c", sciNum[i]);
            // 在e+2的位置输出小数点如果小数点不在最右边
            if(i == e + 2 && cursor - 3 != e) {
                printf(".");
            }
        }

        // 输出多余的0
        for(int i = 0; i < e - (cursor - 3); i++) {
            printf("0");
        }

    }
    return 0;
}