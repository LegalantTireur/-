#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    vector<pair<int, int> > vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i].second >> vec[i].first;
    }
    sort(vec.begin(), vec.end());
    for(int i = 0; i < n; i++){
        swap(vec[i].first, vec[i].second);
    }
    int last = -INF;
    for(int i = 0; i < n; i++){
        if(vec[i].first >= last){
            cout << vec[i].first << ' ' << vec[i].second << '\n';
            last = vec[i].second;
        }
    }


}
