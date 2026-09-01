#include <stdio.h>
#include <conio.h>

int main()
{
	int Vet1[9]={12,11,2,5,7,6,12,15,19},resultado;
	int i;
	
	for(i=0; i<=+10; i++)
	{
		if(Vet1[i]% 2!= 0)
		{
			resultado += Vet1[i];
		}
	}
	
	printf("%d",resultado);
}
