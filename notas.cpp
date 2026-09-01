	#include <stdio.h>
#include <conio.h>

int main()
{
	float nota,soma,media,menos[4];
	float a[4];
	int i,y;
	
	
	for(i=0; i<=3; i++)
	{
		printf("digite uma nota : ");
		scanf("%f",&a[i]);
		soma+=a[i];
		y++;
		
	} 
	
	media= soma/y;
	
	for (i=0; i<=3; i++)
	{
		menos[i] = a[i]-media;
		
	}
	
	for(i=0; i<=3; i++)
		{
			printf("as notas sao: %2.f\n",a[i]);
		}
	
	printf("a diferenca e :\n");
	
	for (i=0 ; i<= 3; i++)
	{
		printf("%2.f\n",menos[i]);
	}
	
	printf("%.2f",media);
}
