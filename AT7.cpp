#include <stdio.h>
#include <conio.h>

int main(){
	
	int mat1[3][3]={{12,3,14},{19,8,12},{9,18,23}};
	int vet1[3],vet2[3],somal=0,somac=0;
	int i,j;
	
	for (i=0; i < 3; i++)
	{
		for(j=0;j<3;j++)
		{
			 	somal+=mat1[i][j];
		}
		vet1[i]=somal;
		somal=0;
		printf("a soma das linhas, %d \n",vet1[i]);
	}
	
	printf("\n");
	
	
	for (i=0; i < 3; i++)
	
	{
		for(j=0;j<3;j++)
		{		
			somac+=mat1[j][i];	
		}
		vet2[i]=somac;
		somac=0;
		printf("a soma das colunas, %d \n",vet2[i]);
	}
	
	
	for (i=0; i < 3; i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d,",mat1[i][j]);
		}
		printf("\n");
	
		
	}
}	
