#include <stdio.h>
#include <conio.h>

int main()
{
	float mat[2][2] = {{ 3.3, 4.8}, { 9.2, 8.7 }};
	int i, j;
	float somal, somat;
	somat = 0;
	
	for (i = 0; i < 2; i++)
	{
		
		somal = 0;
		for (j = 0; j < 2; j++)
		{
			somal += mat[i][j];
		}
		somat += somal;
		printf("soma da linha %d: %.2f\n", i, somal);
	}
	printf("soma total: %.2f\n", somat);

}
