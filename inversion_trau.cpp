#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int n, a[N];
int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    long long res = 0;
    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (a[i] > a[j]) {
                res++;
            }
        }
    }
    cout << res;
}
