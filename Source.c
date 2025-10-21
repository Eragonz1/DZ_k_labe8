#include <locale.h>
#include <stdio.h>
#include <math.h>

int main() {

	int N;
	double s = 0.0;
	double k = 1.0;
	printf("Введите N: ");
	scanf("%d", &N);

	for (int i = 1; i <= N; i++) 
	{
		s += cos(i)/sin(i);
		k *= s;
		printf("\nВ %d итерации значение = %.4f", i, k);
;	}

	printf("\nДля заданного N значение цикла = %.4f", k);

	return 0;
}