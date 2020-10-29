//Реализовать быстрое(бинарное возведение) в целую степень
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 int binpow (int x, int n) {
	if (n == 0)
		return 1;
	if (n % 2 == 1)
		return binpow (x, n-1) * x;
	else {
		int y = binpow (x, n/2);
		return y * y;

	}
}
int main()
{


int a, n, s;
    cin >> a >> n;
s = binpow (a, n);
cout << s;
}
