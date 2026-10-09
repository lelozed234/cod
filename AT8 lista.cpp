#include <stdio.h>
#include <conio.h>

int main(){
	float  mat1[3][3]={{3.4,4.5,3.7},{6.5,4.2,5.3},{3.1,2.6,4.1}};
	float somads=0;
	int i,j;
	for (i=0;i<3;i++)
	{
		
				somads += mat1[i][ 2 - i];
	}	
	printf("%.2f\n",somads);
	
	printf("\n");

	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%.2f,",mat1[i][j]); 
		}
			printf("\n");
	}

}

