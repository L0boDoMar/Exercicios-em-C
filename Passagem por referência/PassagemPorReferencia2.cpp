#include<stdio.h>
#include<stdlib.h>

void area(float r, float *result){
	
*result = r*r*3.1415;
	
}

int main(){
	
	float r,result;
	
	printf("Digite o raio do circulo:\n");
	scanf("%f",&r);
	
	area(r,&result);
	
	printf("Area circulo= %f\n",result);
	system("pause");
	return 0;
}

