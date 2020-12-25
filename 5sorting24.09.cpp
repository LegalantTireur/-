#include <bits/stdc++.h>

using namespace std;

void sort_(int* a, int n){
        for(int i = 0; i < n - 1; i++){
        if(*(a + i) > *(a + i + 1)){
            swap(*(a + i), *(a + i + 1));
            i-=2;
            if(i < -1){
                i++;
            }
        }
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    int* a = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        cin >> *(a + i);
    }
    sort_(a, n);
    for(int i = 0; i < n; i++){
        cout << *(a + i) << ' ';
    }
}
