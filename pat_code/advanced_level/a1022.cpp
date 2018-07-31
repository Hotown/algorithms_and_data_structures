//
// Created by Hotown on 2018/7/31.
//
#include <iostream>
#include <cstdio>
#include <map>
#include <set>

using namespace std;

map<string, set<int> > title, author, key, pub, year;

void search(string & s, map<string, set<int> > & m) {
    if (m.find(s) != m.end()) {
        for (auto it = m[s].begin(); it != m[s].end(); it++) {
            printf("%07d\n", *it);
        }
    } else {
        printf("Not Found\n");
    }
}

int main() {
    // freopen("in.txt", "r", stdin);

    int n, id;
    string t_title, t_author, t_key, t_pub, t_year;
    scanf("%d", &n);
    while(n--) {
        scanf("%d\n", &id);
        getline(cin, t_title);
        title[t_title].insert(id);
        getline(cin, t_author);
        author[t_author].insert(id);
        while (cin >> t_key) {
            key[t_key].insert(id);
            char c = getchar();
            if (c == '\n')
                break;
        }
        getline(cin, t_pub);
        pub[t_pub].insert(id);
        getline(cin, t_year);
        year[t_year].insert(id);
    }
    int m;
    scanf("%d", &m);
    while (m--) {
        int q_id;
        string temp;
        scanf("%d: ", &q_id);
        getline(cin, temp);
        printf("%d: ", q_id);
        cout << temp << endl;
        switch (q_id) {
            case 1:
                search(temp, title);
                break;
            case 2:
                search(temp, author);
                break;
            case 3:
                search(temp, key);
                break;
            case 4:
                search(temp, pub);
                break;
            case 5:
                search(temp, year);
                break;
            default:
                break;
        }
    }

    return 0;
}