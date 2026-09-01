#include <stdio.h>
#include <conio.h>

int main()
{
	int vet1[6]={14,23,34,16,11,12},vet2[6]={17,23,13,24,35,13},vet3[6],i;
	
	for(i=0; i<=5; i++)
	{

		if(vet1[i] > vet2[i])
		{
			vet3[i] = vet1[i];
		}
		else
		{
			vet3[i]=vet2[i];
		}
	}
	
	for(i=0; i<=5 ; i++)
	{
		printf("a comparacao %d\n",vet3[i]);
	}
		
}
