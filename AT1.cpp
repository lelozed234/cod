#include<stdio.h>
#include<conio.h>

int main(){
	
	 int vet1[3]={4,5,2},vet2[3]={8,7,4},mat[3][2];
	 int i,j;
	 
	 for(i=0; i<=2 ; i++)
	 {
	 	for(j=0; j<=1;j++)
		 {
		 	if(j==0)
			 {
				mat[i][j]=vet1[i];			 	
			 }
			 else
			 {
				mat[i][j]=vet2[i]; 
			 }

		 	
		 	printf("%d",mat[i][j]);
		 }
		 printf("\n");
	 }
	  
}
