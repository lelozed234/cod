#include  <stdio.h>
#include  <conio.h>

int main(){
	float temp;
	printf("qual a sua temperatura atual: ");
	scanf("%f",&temp);
    
    if (temp >= 37.0)
	{printf("voce esta com febre");
	}
    
    else
	{printf("vonce nao esta com febre");
	}
}
