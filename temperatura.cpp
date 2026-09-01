#include <stdio.h>
#include <conio.h>

int main(){
	int temp[7]={5,8,9,3,2,11,12},media,i,soma;
	
	for (i=0;i<=6;i++)
	{
		soma+=temp[i];
	}
	
	media=soma/i;
	
	for(i=0;i<=6;i++)
	{
		
		if(temp[i] >= media)
		{
			printf("esta acima da media %d\n",temp[i]);
		}
	}
}
