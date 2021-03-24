#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;

bool cmp(pair<double, double> a, pair<double, double> b){
    return a.first / a.second > b.first / b.second;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    double have;
    cin >> have;
    vector<pair<double, double> > a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second; /// first - price, second - weight
    }
    sort(a.begin(), a.end(), cmp);
    double ans = 0;
    for(int i = 0; i < n; i++){
        if(have > a[i].second){
            have -= a[i].second;
            ans += a[i].first;
        }
        else{
            ans += a[i].first * (have / a[i].second);
            break;
        }
    }
    cout << ans;


}
