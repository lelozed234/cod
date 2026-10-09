#include <stdio.h>
#include <conio.h>

int main()
{
	  int vet1[5]={4,2,5,6,9};
	  int i,soma;
	  soma=0;
	  
	  for(i=0;i<=5;i++)
	  {
	  	if(	vet1[i] %2==0)
		  {
		  		soma+=vet1[i];
		  }
		  
	  }
	  printf("%d",soma);
}
