//реализовать функцию Аккермана
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int> > a(1000, vector<int>(1000));
    for (int i = 0; i < 100; i++) {
        a[0][i] = i + 1;
    }
    for (int i = 1; i < 100; i++) {
        a[i][0] = a[i - 1][1];
        a[i][1] = a[i - 1][a[i][0]];
    }
    for (int i = 1; i < 100; i++) {
        for (int j = 1; j < 100; j++) {
            a[i][j] = a[i - 1][a[i][j - 1]];
        }
    }
}
