#include <stdio.h>
#include <conio.h>


	void inverte(int *t, int *u)
	{
		int aux;
		aux=*t;	
		*t=*u;
		*u=aux;
		printf("\n o valor de T no inveter () - %d \n", *t);
		printf("\no valor de U no inverter () - %d \n", *u);
	}
	
	int main()
	{
		int a = 15;
		int b = 50;
		
		printf("\n o valor de A antes de inveter () - %d \n", a);
		printf("\no valor de B antes de inverter () - %d \n", b);
		
		inverte(&a,&b);
		
		printf(" \no valor de A depois de inveter () - %d \n", a);
		printf("\no valor de B depois de inverter () - %d \n", b);
		
		return 0;
	}
