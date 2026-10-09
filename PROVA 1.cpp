#include <stdio.h>
#include <conio.h>

int main()
{
	int mat1[3][3]={{5,4,1},{3,2,1},{3,3,3}};
	int soma,i,j,vet1[3];
	
	
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			soma+=mat1[i][j];
			
		}
		vet1[i]=soma;
		soma=0;
		
		
		printf("%d,",vet1[i]);
	}
}
