#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<vector<int> > tab(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> tab[i][j];
        }
    }
    vector<vector<int> > dp(n, vector<int>(m, INF));
    dp[0][0] = tab[0][0];
    for(int i = 1; i < n; i++){
        dp[i][0] = dp[i - 1][0] + tab[i][0];
    }
    for(int i = 1; i < m; i++){
        dp[0][i] = dp[0][i - 1] + tab[0][i];
    }
    for(int i = 1; i < n; i++){
        for(int j = 1; j < m; j++){
            dp[i][j] = min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]}) + tab[i][j];
        }
    }
    cout << dp[n - 1][m - 1];

}
