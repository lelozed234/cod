#include <stdio.h>
#include <conio.h>

int main(){
	int mat1[2][3]={{3,2,5},{9,8,6}};
	int i,j;
	int soma,media,m;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			if((mat1[i][j] >= 12) && (mat1[i][j] <= 20))
			{
				printf("posicao %d  %d = %d\n",i,j,mat1[i][j]);
			}
			
			if( mat1[i][j] %2==0)
			{
				soma+=mat1[i][j];
				
				m++;
				
				media=soma/m;
			}
			
		}
	}
	
	
	printf("%d\n",media);
}
