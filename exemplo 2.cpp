#include <stdio.h>
#include <conio.h>

void calculadiv(int num, int div, int *quociente, int *resto)
{
	*quociente = num/div;
	*resto = num % div;
}

int main()
{
	int q,r;
	
	calculadiv(10,3, &q, &r);
	
	printf(" o valor do quociente %d e o valor do resto %d",q,r);
}
