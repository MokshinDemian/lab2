#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, ".UTF8");
    char c;
    int a, i, j, p;

    do
    {
        printf("Введите символ: ");
        scanf_s(" %c", &c, 1);

        printf("Введите сторону a: ");
        scanf_s("%d", &a);
        for (i = 0; i < a; i++)
        {
            for (j = 0; j < a - i; j++)
            {
                if (i == 0 || j == 0 || j == a - i - 1)
                    printf("%c", c);
                else
                    printf(" ");
            }
            printf("\n");
        }

        printf("Продолжить? (Да - любое число, Нет - 0): ");
        scanf_s("%d", &p);
    } while (p != 0);
    return 0;
}