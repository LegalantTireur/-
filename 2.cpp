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
    vector<bool> isPrime(k + 1, true);
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i * i <= k; i++){
        if(isPrime[i]){
            for(int j = i * i; j <= k; j += i){
                isPrime[j] = false;
            }
        }
    }
    for(int i = 0; i < n; i++){
        if(vec[i] <= k && isPrime[vec[i]]){
            cout << vec[i] << ' ';
        }
    }
}
