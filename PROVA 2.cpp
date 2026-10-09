#include <stdio.h>
#include <conio.h>

int main()
{
		int mat1[3][3]={{6,6,3},{8,8,1},{2,3,1}};
		int i,j;
		int somac,somadp,somal;
		
		somac=0;
		somadp=0;
		somal=0;
		
		for(i=0;i<=2;i++)
		{
			for(j=0;j<=2;j++)
			{
				if(i == j )
				{
					somadp+=mat1[i][j];
				}
			}
		}
		
		for(i=0;i<=2;i++)
		{	
			for(j=0;j<=2;j++)
			{
			
				if( i == 1)
				{
					somal+=mat1[i][j];
				}
			}
			
		}
		
		
		for(i=0;i<=2;i++)
		{	
			for(j=0;j<=2;j++)
			{
			
				if( j == 0)
				{
				somac+=mat1[i][j];
				}
			}
			
		}
		
		
		
		printf("%d,\n",somadp);
		printf("%d,\n",somal);
		printf("%d,\n",somac);
		
	
	
}
