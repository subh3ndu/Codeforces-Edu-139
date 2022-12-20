#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// A. Extremely Round

pair<int, int> foo(int x) {
    int cnt = 0;
    int y = 0;
    while(x > 0) {
        x /= 10;
        if(x) y = x;
        cnt++;
    }
    return {cnt, y};
}

void solve() {
    int n;
    cin >> n;
    if(n <= 9) {
        cout << n << '\n';
        return ;
    }

    auto x = foo(n);
    cout << (x.first - 1) * 9 + (x.second) << "\n";
    return ;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test = 1;
    cin >> test;
    for(int i=1; i<=test; i++) {
        solve();
    }

    return 0;
}
