//Написать программу вычисления
//среднего арифметического кубов
//заданной числовой последовательности
//(на вход даётся размер послед-ти и затем сами числа)
#include <iostream>
#include <cmath>
using namespace std;

int main() {
        double s = 0;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            double x;
            cin >> x;
            s += pow(x, 3);
        }
    
    cout << s / n << endl;
    return 0;
}

