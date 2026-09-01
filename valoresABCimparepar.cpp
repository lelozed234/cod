#include <stdio.h>
#include <conio.h>

int main()
{
	int vet1[6],vet2[6],vet3[6],i;

	for(i=0; i <= 5; i++)
	{
		printf("digite os valores de A:\n");
		scanf("%d",&vet1[i]);
	}	
	for(i=0; i <= 5; i++)
	{
	
		printf("digite os valores de B:\n");
		scanf("%d",&vet2[i]);
	}
		
		for(i=0;i<=5;i++){
		
		if( i %2==0)
		{
			vet3[i] = vet1[i];
		}
		else
		{
			vet3[i]=vet2[i];
		}
}
	
	for(i=0;i<=5;i++)
	{
		printf("os valores %d nas posicoes %d \n",vet3[i],i);
	}
	
}
