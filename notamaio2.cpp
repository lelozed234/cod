#include <stdio.h>
#include <conio.h>

int main()
{
		float nt[5],ntm=0;
	    int i;
	    
		for(i=0; i<=4; i++)
		{
			printf("digite uma nota: ");;
			scanf("%f",&nt[i]);	
			
			if(nt[i] > ntm)
			{
				ntm = nt[i];
			}
		}
		
			printf("essa e maior nota %.2f",ntm);
		
		
}
