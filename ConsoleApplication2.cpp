//Реализовать функцию вычисления 
//биномиальных коэффициентов
//(так чтобы проходил тест C из 1000 по 998)
#include <bits/stdc++.h>
using namespace std;
long long cc(long long n, long long k) {
    long long q = 1;
    long long i = 1;
    long long j = 1;
    for (long long p = 2; p <= n; p++) {
        q *= p;
        if (q % i == 0 && i <= k) {
            q /= i;
            i++;

        }
        if (q % j == 0 && j <= (n - k)) {
            q /= j;
            j++;
        }
    }
    while (i < k + 1) {
        q /= i;
        i++;
    }
    while (j < (n - k) + 1) {
        q /= j;
        j++;
    }
    return q;
}
int main() {
    long long n;
    long long k;
    cin >> n;
    cin >> k;

    cout << cc(n, k);

    return 0;
}
