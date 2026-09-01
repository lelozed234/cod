#include <stdio.h>
#include <conio.h>

int main()
{
	int vet1[5]={4,5,7,8,5},vet2[5]={4,2,7,8,9},vet3[5],i;
	
	for (i=0;i<=4;i++)
	{
		vet3[i]=vet1[i]+vet2[i];
	}
	
	for(i=0;i<=4;i++)
	{
		printf("%d\n",vet3[i]);
	}
}
