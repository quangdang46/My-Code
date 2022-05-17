#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string, int> m;
    int q;
    cin >> q;
    while(q--) {
        int type;
        cin >> type;
        switch(type) {
            case 1: {
                string s;
                int y;
                cin >> s >> y;
                m[s] += y;
                break;
            }
            case 2: {
                string s;
                cin >> s;
                m.erase(s);
                break;
            }
            case 3: {
                string s;
                cin >> s;
                if(m.find(s) != m.end()) {
                    cout << m[s] << endl;
                } else {
                    cout << "0" << endl;
                }
                break;
            }
        }
    }
    return 0;
}



