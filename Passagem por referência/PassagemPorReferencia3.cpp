#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

forca(float m, float a, float *f){
	
	*f=m*a;
}

int main(){

	setlocale(LC_ALL, "Portuguese");

		float m,a,f;
		
		printf("Valor da massa:\n");
		scanf("%f",&m);
		printf("Valor da aceleração:\n");
		scanf("%f",&a);
		
		forca(m,a,&f);
		
		printf("Força= %f\n",f);
		
	system("pause");
	return 0;
}
