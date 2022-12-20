#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// B. Notepad#

void solve() {
    int n;
    string s;
    cin >> n >> s;
    bool ans = false;
    for(int i=0; i<n-2 && !ans; i++) {
        for(int j=i+2; j<n && !ans; j++) {
            if(s[i] == s[j] and s[i+1] == s[j+1])
                ans = true;
        }
    }
    cout << (ans ? "YES" : "NO") << "\n";

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
