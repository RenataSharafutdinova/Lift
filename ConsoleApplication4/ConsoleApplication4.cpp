#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double a[8];
    double s_minus = 0;
    cout << "Введите 8 чисел:\n";

    for (int i = 0; i < 8; i++) {
        cin >> a[i];
        if (a[i] < 0) {
            s_minus += a[i];
        }

    }
    int minI, maxI;
    double min = a[0], max = a[0], pr1 = 1, pr2 = 1;
    for (int i = 0; i < 8; i++) {
        if (a[i] > max) {
            max = a[i];
            maxI = i;

        }
        else if (a[i] < min) {

            min = a[i];
            minI = i;

        }

        if (i % 2 == 0) {
            pr2 *= a[i];
        }
    }


    if (minI < maxI) {

        for (; minI + 1 < maxI; minI++) {

            pr1 *= a[minI + 1];
        }
    }
    else {
        for (; maxI + 1 < minI; maxI++) {

            pr1 *= a[maxI + 1];
        }
    }

    double s = 0;
    int l1, l2;
    for (int i = 0; i < 8; i++) {
        if (a[i] < 0) {
            l1 = i;
            break;
        }
    }
    for (int i = 7; i >= 0; i--) {
        if (a[i] < 0) {
            l2 = i;
            break;
        }
    }
    for (; l1 + 1 < l2; l1++) {
        s += a[l1 + 1];
    }

    cout << "Сумма всех отрицательных чисел " << s_minus << endl;
    cout << "Произведение чисел между мин и макс " << pr1 << endl;
    cout << "Произведение чисел с четными индексами " << pr2 << endl;
    cout << "Сумма чисел между первым и вторым отрицательным числом "<< s << endl;

}