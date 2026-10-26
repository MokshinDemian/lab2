#include <stdio.h>
#define ROW 25
#define COL 25
int main(void) {
	int row, col;
	for (row = 5; row <= 25;row+= 5)
	{
		for (col = 25; col >= row;col-=5)
		{
			printf("%d ", row);
		}
		printf("\n");
	}
	system("pause");
}