#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    set<int> s;
    int q;
    cin >> q;
    while (q--){
        int x,y;
        cin >> x>>y;
        switch(x) {
            case 1:
                s.insert(y);
                break;
            case 2:
                s.erase(y);
                break;
            case 3:
                if(s.find(y)!=s.end()) cout << "Yes" << endl;
                else cout << "No" << endl;
                break;
        }
    }   
    return 0;
}



