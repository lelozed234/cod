	#include <stdio.h>
#include <conio.h>

int main(){
	
	float mat1[3][4]={{5.6,7.8,8.9,8.6},{8.9,5.6,8.2,7.3},{9.7,6.5,9.4,8.3}};
	float soma,media, vet1[3],m;
	int i,j;
	
	soma=0;
	media=0;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{	
			soma+=mat1[i][j];
			
		}
		m++;
		vet1[i]=soma;
		
		soma=0;
		
		
	}	
	
	
	
	for(i=0;i<3;i++){
	
			printf("%.2f\n",vet1[i]/m);

	}
		
	printf("\n");
	
	
		
	
}
