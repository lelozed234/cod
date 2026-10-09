#include <stdio.h>
#include <conio.h>

int main(){
	int mat1[2][2]={{1,15},{16,19}};
	int i,j;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			if((mat1[i][j] >= 15) && (mat1[i][j] <= 20))
			{
				printf("posicao %d  %d = %d\n",i,j,mat1[i][j]);
			}
		}
	}
}
