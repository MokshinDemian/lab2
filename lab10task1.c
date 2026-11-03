#include <stdio.h>
#include <math.h>
#include <locale.h>
double f1(double x) {
	double y;
	if (x <= 3) {
		y = x * x - 3 * x + 9;
	}else { 
		y = 1.0 / (x * x * x + 3); 
	}
	return y;
}
double f2(double x) {
	double y;
	y = x * exp(sin(x * x));
	return y;
}
int main() {
	setlocale(LC_ALL, ".UTF8");
	double x, a, b;
	puts("Введите x");
	scanf_s('%lf', &x);
	a = f1(x);
	b = f2(x);
	printf(" f1 = %lf               f2 = %lf", a, b);
	printf("Произведние = %lf", a * b);
	printf("Разность квадратов = %lf", a * a - b * b);
	printf("Удвоенная сумма = %lf", 2 * (a + b));
	return 0;
}