#include <stdio.h>
#include <conio.h>

int main(){
		int mat1[4][4]={{4,3,1,5},{8,5,9,7},{9,6,2,7},{5,3,7,9}};
		int i,j;
		int vet1[4],soma;
		
		soma=0;
		
		for(i=0;i<4;i++)
		{	
			for(j=0;j<4;j++)
			{	
				if( j % 2 != 0)
				{
					soma+=mat1[i][j];
					
				}
					
			}
			
			
			vet1[i]=soma;
			printf("%d\n",vet1[i]);
		}
			
			
			
	for(i=0;i<4;i++)
		{	
			for(j=0;j<4;j++)
			{	
			
				printf("%d,",mat1[i][j]);

			}
			printf("\n");
		}
}
