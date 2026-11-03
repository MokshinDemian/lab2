#include <stdio.h>
#include <math.h>
#include <locale.h>
double factorial(int n)
{
    double f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

double sin_n(double x, int N)
{
    double sum = 0;
    for (int k = 1; k <= N; k++)
    {
        sum += pow(-1, k - 1) * pow(x, 2 * k - 1) / factorial(2 * k - 1);
    }
    return sum;
}
double sin_eps(double x, double eps)
{
    double sum = 0.0;
    double term = x;
    int k = 0;
    while (fabs(term) >= eps)
    {
        sum += term;
        k++;
        term *= -x * x / ((2 * k) * (2 * k + 1));
    }
    return sum;
}

int main()
{
    double x, eps;
    int N;
    setlocale(LC_ALL, ".UTF8");
    printf("Введите в радианах:\n");
    scanf_s("%lf", &x);

    printf("Введите количество членов ряда N:\n ");
    scanf_s("%d", &N);

    printf("Введите точность eps: \n ");
    scanf_s("%lf", &eps);

    double result1 = sin(x);
    double result2 = sin_n(x, N);
    double result3 = sin_eps(x, eps);

    printf("Стандартный синус = %.10lf\n", result1);
    printf("По формуле = %.10lf\n", result2);
    printf("С точностью = %.10lf\n", result3);

   
    printf("Отклонение\n");

    printf("sin_n:   %.10e\n", fabs(result1 - result2));
    printf("sin_eps: %.10e\n", fabs(result1 - result3));

    return 0;
}