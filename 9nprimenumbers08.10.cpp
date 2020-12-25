#include <bits/stdc++.h>

const int MAX = 1e6;

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<bool> isprime(MAX + 1, true);
    isprime[0] = false;
    isprime[1] = false;
    for(int i = 2; i * i <= MAX; i++){
        if(isprime[i]){
            for(int j = i * i; j <= MAX; j += i){
                isprime[j] = false;
            }
        }
    }
    vector<int> ans;
    int pos = 1;
    while(ans.size() != n){
        if(isprime[pos]){
            ans.push_back(pos);
        }
        pos++;
    }
    for(int i = 0; i < n; i++){
        cout << ans[i] << ' ';
    }


}
