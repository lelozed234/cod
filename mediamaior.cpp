#include <stdio.h>
#include <conio.h>

int main(){
	
	float Vet1[5]={1,6,5,9.5,9.5},maior=0;
	int i;
	
	for(i=0;i<=4;i++)
	{
		printf("As Notas sao %.2f \n",Vet1[i]);	
	}
	
	maior=Vet1[0];
	
	for(i=1;i <= 4;i++)
	{
		if ( Vet1[i] >= maior)
		{	
			maior=Vet1[i];
				printf(" a nota %.2f e maior e a posicao e %d\n",maior,i);
		}
		
	}
	
	return 0;
	
}

