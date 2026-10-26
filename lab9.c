#include <stdio.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, ".UTF8");
	int x, col3 = 0, last = 0,x2,x3,colchet = 0,x4,col5=0,x5,nechet=0,x6, mnoj=1,x7,bol7=0,x8,pred2,x9,jj = 0;
	double ost;
	scanf_s("%d", &x);
	x9=x8=x7=x6 = x5= x4 = x3 = x2 = x;
	while (x > 0)
	{
		ost = x % 10;
		if (ost == 3)
		{
			col3++;
		}
		x = x / 10;
	}
	printf("Количество 3 в числе - %d\n", col3);

	x = x2;
	ost = x % 10;
		while (x > 0 && x% 10  == ost)
		{
			last+=1;
			x /=10;
		}
	printf("Количество одинаковых чисел на конце - %d\n", last);
	
	x = x3;
	while (x > 0) {
		if (x % 10 % 2 == 0)
		{
			colchet++;
			x /= 10;
		}
		else { x /= 10; }
	}
	printf("Количество четных цифр в числе - %d\n", colchet);
	x = x4;
	while (x > 0) {
		if (x % 10 > 5) {
			col5++;
		}
		x /= 10;
		}
	printf("Количество цифр больше 5 - %d\n",col5);
	x = x5;
	while (x > 0) {
		if (x % 10 % 2 != 0) {
			nechet += x % 10;
		}
		x /= 10;
	}
	printf("Сумма нечетных цифр числа - %d\n", nechet);
	x = x6;
	while (x > 0) {
		if (x % 10 != 0) {
			mnoj = x % 10 * mnoj;
		}
		x /= 10;
	}
	printf("Произведение всех цифр(кроме 0) - %d\n", mnoj);
	x = x7;
	while (x > 0) {
		if (x % 10 >= 7) {
			bol7 += x % 10;
		} x /= 10;
	}printf("Сумма цифр больше 7 - %d\n", bol7);
	x = x8;
	while (x >= 100) {
		x /= 10;
	}pred2 = x % 10;
	x = x9;
	pred2 = pred2 * (x / 10 % 10);
	printf("Произведение второй цифры и предпоследней - %d", pred2);
}	
		
