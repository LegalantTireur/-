#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
    int ans = 0;
    int cnt = 1;
    vector<int> a;
    for(int i = 0; i < n; i++){
        int j = i;
        while(i + 1 < n && vec[i] < vec[i + 1]){
            i++;
            cnt++;
        }
    if(cnt > ans){
        ans = cnt;
        a = {vec.begin() + j, vec.begin() + i + 1};
    }
    }
    for(auto& i : a){
        cout << i << ' ';
    }
}
