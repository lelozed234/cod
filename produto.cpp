#include <stdio.h>
#include <conio.h>

int main()
{
	int cod[5],preco[5],i;
	char prod[5][20];
	
	for(i=0; i<=4; i++)
	{
		printf("digite o codigo:\n");
		scanf("%d",&cod[i]);
		
		printf("digite o preco:\n");
		scanf("%d",&preco[i]);
		
		printf("digite o nome do produto:\n");
		scanf("%s",&prod[i]);
		

	}
	
	for(i=0;i<=4 ;i++){
	if (preco[i] <= 3)
		{
			printf("o produto %s de valor %d e codigo %d\n",prod[i],preco[i],cod[i]);
		}
	}
	
	
}
