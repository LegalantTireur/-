#include <bits/stdc++.h>

using namespace std;

void del(vector<int>& a){
    vector<int> new_arr;
    for(int i = 0; i < a.size(); i++){
        if(a[i] % 2 == 1){
            new_arr.push_back(a[i]);
        }
    }
    a = new_arr;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    del(a);
    for(int i = 0; i < a.size(); i++){
        cout << a[i] << ' ';
    }
}
