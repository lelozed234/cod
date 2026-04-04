#include <stdio.h>
#include <conio.h>

int main()
{
	float salario,novo_salario,aumento,porcentagem;
	printf("digite o seu salario: \n");
	scanf("%f",&salario);
	
	if (salario <= 1000)
	{ porcentagem=20;
	}
	else if (salario <= 3000)
	{ porcentagem=15;
	}
	else if (salario <= 8000)
	{porcentagem=10;
	}
	else
	{porcentagem=5;
	}
	
	aumento= salario*porcentagem/100;
	novo_salario=salario + aumento;
	
	printf(" o seu novo salario e %.2f\n",novo_salario);
	printf("aumento em reias %.2f\n",aumento);
	printf("porcentagem  adicionada, %.2f\n",porcentagem);
}
