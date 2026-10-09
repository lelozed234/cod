#include <stdio.h>
#include <conio.h>

int main(){
		int mat1[3][3]={{4,3,1},{5,9,7},{9,6,2}};
		int i,j;
		int vet1[1],soma;
		
		soma=0;
		
		for(i=0;i<3;i++)
		{	
		
			if( i % 2 ==0 )
			for(j=0;j<3;j++)
			{	
				soma+=mat1[i][j];
			}
			vet1[i]=soma;
			
				printf("%d\n",vet1[i]);
		}
			
}
