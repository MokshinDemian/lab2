#include <stdio.h>
#include <math.h>
int main(void) {
	int n;
	double s,x,sum = 0;
	scanf_s("%f",&x);
	scanf_s("%d", &n);
	s = sin(x);
	for (int i = 1;i <= n; i++) {
		sum = sum + s;
		s = sin(x) * sin(x);
	}
	printf("%f", sum);
	return 0;
}