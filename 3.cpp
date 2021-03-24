#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
    int sum = 0;
    int l = 0;
    int r = 0;
    int cnt = 0;
    while(r <= n && l < n){
        while(r < n && sum + vec[r] <= k){
            sum += vec[r];
            r++;
        }
        cnt += (r - l);
        sum -= vec[l];
        l++;
    }
    cout << cnt;
}
