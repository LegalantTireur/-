#include <bits/stdc++.h>

using namespace std;


void generate_(vector<pair<int, int> > &g){
    int n = g.size();
    for(int i = n - 1; i > 0; i--){
        int j = abs(rand());
        j %= i;
        swap(g[i], g[j]);
    }
}
int partition_(vector<pair<int, int> > &a, int l, int r){
    int v = a[(l + r)/2].first;
    int i = l;
    int j = r;
    while(i <= j){
        while(a[i].first < v){
            i++;
        }
            while(a[j].first > v){
                j--;
            }
            if(i >= j){
                break;
            }
            swap(a[i], a[j]);
            i++;
            j--;
        }
        return j;
    }

int quicksort(vector<pair<int, int> > &a, int l, int r, int cnt){
    if(l == r){
        return a[l].first;
    }
    if(l < r){
        int q = partition_(a, l, r);
    if(q - l >= cnt){
        quicksort(a, l, q, cnt);
    }
    else{
        quicksort(a, q + 1, r, cnt - (q - l + 1));
    }
    }
}
int  main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen("kth.in", "r", stdin);
    freopen("kth.out", "w", stdout);
    int n, k;
    cin >> n >> k;
    int a, b, c, d, e;
    vector<pair<int, int> > vec(n);
    cin >> a >> b >> c >> d >> e;
    if(n == 1){
        cout << d;
        return 0;
    }
    vec[0].first = d;
    vec[1].first = e;
    vec[0].second = 0;
    vec[1].second = 1;
    for(int i = 2; i < n; i++){
        vec[i].first = vec[i - 2].first * a + b * vec[i - 1].first + c;
        vec[i].second = i;
    }
    cout << quicksort(vec, 0, n - 1, k - 1);
}
