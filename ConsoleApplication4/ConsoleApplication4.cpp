#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

//нахождение максимума
//#define MAX(a, b) a >= b ? a : b
//int main() {
//	int a, b, max;
//	cin >> a; cin >> b;
//	max= MAX(a, b);
//	cout << max;
//}


//возыедение числа в степень
//#define power(a, n) { \
//    double rez = 1; \
//    for (size_t i = 0; i < (n); ++i) { \
//        rez *= (a); \
//    } \
//    cout<<rez; \
//}
//int main()
//{
//    double a, n;
//    cin >> a;
//    cin >> n;
//    power(a, n);
//   
//    return 0;
//}

//среднее арифметическое двух чисел
//#define average(n1,n2) (((n1)+(n2))/2)
//int main() {
//	double n1, n2;
//	cin >> n1; cin >> n2;
//	cout << average(n1,n2);
//}

//модуль числа
//#define module(a) fabs(a)
//int main() {
//	double a;
//	cin >> a;
//	cout << module(a);
//}

//перевод градусов Цельсия в Фаренгейты
//#define degreesC_F(n) ((n)*9)/5+32
//int main() {
//	int n;
//	cin >> n;
//	cout << degreesC_F(n);
//}

//сумма квадратов двух чисел
#define sum_of_squares(n1, n2) ((n1)*(n1))+((n2)*(n2))
int main() {
	int n1, n2;
	cin >> n1; cin >> n2;
	cout << sum_of_squares(n1, n2);
}





