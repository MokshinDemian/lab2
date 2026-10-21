#include <stdio.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, ".UTF8");
	int den, mes;
	puts("Введите день");
	scanf_s("%d", &den);
	puts("Введите месяц");
	scanf_s("%d", &mes);
	switch ((den >= 22 && mes == 12 && den <= 31) || (den >= 01 && den <= 19 && mes == 1))
	{
	case 1:
		printf("Козерог\n");
		break;
	}
	switch ((den >= 20 && den <= 31 && mes == 1 ) || (den >= 01 && den <= 18 && mes == 2 ))
	{
	case 1:
		printf("Водолей\n");
		break;
	}
	switch ((den >= 19 && den <= 29 && mes == 2) || (den >= 01 && den <= 20 && mes == 3))
	{
	case 1:
		printf("Рыбы\n");
		break;
	}
	switch ((den >= 21 && den <= 31 && mes == 3) || (den >= 01 && den <= 19 && mes == 4))
	{
	case 1:
		printf("Овен\n");
		break;
	}
	switch ((den >= 20 && den <= 30 && mes == 4) || (den >= 01 && den <= 20 && mes == 5))
	{
	case 1:
		printf("Телец\n");
		break;
	}
	switch ((den >= 21 && den <= 30 && mes == 5) || (den >= 01 && den <= 20 && mes == 6))
	{
	case 1:
		printf("Близнецы\n");
		break;
	}
	switch ((den >= 21 && den <= 31 && mes == 6) || (den >= 01 && den <= 22 && mes == 7))
	{
	case 1:
		printf("Рак\n");
		break;
	}
	switch ((den >= 23 && den <= 31 && mes == 7) || (den >= 01 && den <= 22 && mes == 8))
	{
	case 1:
		printf("Лев\n");
		break;
	}
	switch ((den >= 23 && den <= 30 && mes == 8) || (den >= 01 && den <= 22 && mes == 9))
	{
	case 1:
		printf("Дева\n");
		break;
	}
	switch ((den >= 23 && den <= 31 && mes == 9) || (den >= 01 && den <= 22 && mes == 10))
	{
	case 1:
		printf("Весы\n");
		break;
	}
	switch ((den >= 23 && den <= 30 && mes == 10) || (den >= 01 && den <= 21 && mes == 11))
	{
	case 1:
		printf("Скорпион\n");
		break;
	}
	switch ((den >= 22 && den <= 31 && mes == 11) || (den >= 01 && den <= 21 && mes == 12))
	{
	case 1:
		printf("Стрелец\n");
		break;
	}
	system("pause");
}