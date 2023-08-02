#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;
int main(int argc, char* argv[]){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    registerGen(argc, argv, 1);
    int startN = opt<int>("startN");
    int goalN = opt<int>("goalN");
    int startV = opt<int>("startV");
    int goalV = opt<int>("goalV");
    int n = rnd.next(startN, goalN);
    cout << n << "\n";
    for (int i = 1; i <= n; i++) {
        cout << rnd.next(startV, goalV);
        if (i < n) {
            cout << " ";
        }
    }
}



