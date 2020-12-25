#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<bool> isprime(n + 1, true);
    isprime[0] = false;
    isprime[1] = false;
    for(int i = 2; i * i < n; i++){
        if(isprime[i]){
            for(int j = i * i; j < n; j += i){
                isprime[j] = false;
            }
        }
    }
    vector<int> ans;
    for(int i = 1; i <= n; i++){
        if(!isprime[i]){
            ans.push_back(i);
        }
    }
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << ' ';
    }


}
