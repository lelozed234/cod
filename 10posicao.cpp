#include <stdio.h>
#include <conio.h>

int main(){
	int i,vet1[10];
	
	
	for(i=0; i<=9;i++)
	{
		if( i <= 4 )
		{
			vet1[i]=1;
		}
		else
		{
			vet1[i]=0;
		}	
	}
	
	for(i=0; i<=9;i++)
	{
		printf("%d\n",vet1[i]);	
	}
		
}
