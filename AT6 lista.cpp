#include <stdio.h>
#include <conio.h>

int main(){
	
	int mat1[2][2]={{8,2},{5,3}};
	int i,j;
	int maior,mult;
	
	for(i=0; i<2; i++)
	{
		maior=0;
		for(j=0;j<2;j++)
		{	
			if(mat1[i][j] > maior)
			{	
				maior = mat1[i][j];
			}
			
		}
		for(j=0;j<2;j++)
		{
			
			mat1[i][j]=mat1[i][j]*maior;
			
			printf("%d,",mat1[i][j]);
		}
			
		printf("\n");
	
		
			
	}

	
}
