#include<iostream>
#include<string>
#include<stack>
#include<queue>
using namespace std;

/*
    有一组边界值过不了，原因可能是栈空间超出范围？
*/
int main() {

    string str;
    queue<char> q;
    stack<char> index;
    char sign;

    while(cin >> str){
        
            if(str[0] == '-')
                cout << str[0];
        
            for(int i = 1; i < str.find('E'); i++) {
                q.push(str[i]);
            }

            sign = str[str.find('E') + 1];
        
            for(int i = str.find('E') + 2; i < str.length(); i++) {
                index.push(str[i]);
            }
        
            int indexNum = 0;
            int j = 1;
        
            while(!index.empty()) {
                indexNum += (index.top() - '0') * j;
                j *= 10;
                index.pop();
            }
        
            // cout << indexNum << endl;
            if(indexNum == 0) {
                while(!q.empty()) {
                    cout << q.front();
                    q.pop();
                }
                cout << endl;
                return 0;
            }
        
        
            if(sign == '+') {
                if(q.front() == '0') {
                    q.pop();
                } else {
                    cout << q.front();
                    q.pop();
                }
         
                q.pop();    // 去掉小数点
         
                while(!q.empty()) {
                    cout << q.front();
                    indexNum --;
                    q.pop();
                    if(indexNum <= 0) {
                        break;
                    }
                }
         
                while(indexNum > 0) {
                    cout << 0;
                    indexNum --;
                }
            } else {
                cout << "0.";
                indexNum--;
         
                while(indexNum > 0) {
                    cout << 0;
                    indexNum --;
                }
         
                while(!q.empty()) {
                    if(q.front() == '.') {
                        q.pop();
                        continue;
                    } else {
                        cout << q.front();
                        q.pop();
                    }
                }
            }
            cout << endl;
    }

    return 0;
}
