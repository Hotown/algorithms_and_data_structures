#include<iostream>
using namespace std;

int main() {

    int n;
    
    cin >> n;

    int total = n;

    char a, b;

    int winA = 0, winB = 0, draw = 0;

    int ac = 0, aj = 0, ab = 0, bc = 0, bj = 0, bb = 0;
    
    while(n--) {
        cin >> a >> b;

        if(a == 'C') {
            if(b == 'C') {
                draw++;
            } else if (b == 'J') {
                winA++;
                ac++;
            } else {
                winB++;
                bb++;
            }
        }

        if(a == 'J') {
            if(b == 'C') {
                winB++;
                bc++;
            } else if (b == 'J') {
                draw++;
            } else {
                winA++;
                aj++;
            }
        }

        if(a == 'B') {
            if(b == 'C') {
                winA++;
                ab++;
            } else if (b == 'J') {
                winB++;
                bj++;
            } else {
                draw++;
            }
        }
    }

    printf("%d %d %d\n", winA, draw, total-winA-draw);
    printf("%d %d %d\n", winB, draw, total-winB-draw);

    printf("%c ", ab >= ac ? (ab >= aj ? 'B' : 'J') : (ac >= aj ? 'C' : 'J'));
    printf("%c\n", bb >= bc ? (bb >= bj ? 'B' : 'J') : (bc >= bj ? 'C' : 'J'));

    return 0;
}