#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int n, a[N];
void Compress() {
    std::vector <int> list;
    for (int i = 1; i <= n; i++) {
        list.push_back(a[i]);
    }
    sort(list.begin(), list.end());
    list.resize(unique(list.begin(), list.end()) - list.begin());
    for (int i = 1; i <= n; i++) {
        a[i] = lower_bound(list.begin(), list.end(), a[i]) - list.begin() + 1;
    }
}
struct Fenwick {
    int n;
    vector <int> BIT;
    Fenwick(int n): n(n) {
        BIT.resize(n + 1);
    }
    void update(int x, int v) {
        for (int i = x; i <= n; i += i & (-i)) {
            BIT[i] += v;
        }
    }
    int get(int x) {
        int res = 0;
        for (int i = x; i >= 1; i -= i & (-i)) {
            res += BIT[i];
        }
        return res;
    }
};
int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    Compress();
    Fenwick F(n);
    long long res = 0;
    for (int i = 1; i <= n; i++) {
        res += F.get(n) - F.get(a[i]);
        F.update(a[i], 1);
    }
    cout << res;
}