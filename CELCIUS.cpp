#include <stdio.h>
#include <conio.h>

int main()
{
	float c,f;
	char unidade;
	 	
	printf("digite em qual escala voce deseja (C/F): ");
	scanf("%c",&unidade);
	
	if (unidade == 'F')
	{ printf("digite a temperatura em fahrenheit: ");
	  scanf("%f",&f);
	  c=(f-32)/9*5;
	  printf("a temperatura em celcius e %.2f",c);
	}
	else 
	{printf("digite a temperatura em celcius: ");
	  scanf("%f",&c);
	  f=9*c/5+32;
	  printf("a temperatura em fahrenheit e %.2f",f);
	}
}
