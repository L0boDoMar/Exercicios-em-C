#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void area(float a,float b,float c,float *ar){
	
	*ar= 2*((a*b)+(a*c)+(b*c));

}

void volume(float a,float b,float c,float *vol){
	
	*vol= (a*b*c);
	
}


int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float a,b,c,ar,vol;
	
	printf("Informe o tamanho de a:\n");
	scanf("%f",&a);
	printf("Informe o tamanho de b:\n");
	scanf("%f",&b);
	printf("Informe o tamanho de c:\n");
	scanf("%f",&c);
	
	area(a,b,c,&ar);
	volume(a,b,c,&vol);
	
	printf("Área = %.2f\nVolume= %.2f\n",ar,vol);
	
	
	system("pause");
	return 0;
}
