#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// C. Hamiltonian Wall

void solve() {
    int n;
    string s1, s2;
    cin >> n >> s1 >> s2;
    
    int temp = -1;
    int tempCol = -1;
    for(int i = 0; i < n; i++) {
        if(s1[i] == 'B' and s2[i] == 'B') 
            continue;
        int t = 0;
        if(s2[i] == 'B')
            t = 1;

        if(temp != -1 and tempCol != -1) {
            int x = i - (tempCol+1);
            if(x % 2 == 0 and temp == t)
                ;
            else if(x % 2 == 1 and temp != t)
                ;
            else {
                cout << "NO\n";
                return;
            }
        }
        
        temp = t;
        tempCol = i;
    }
    cout << "YES\n";
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
