#include<stdio.h>

#include<stdlib.h>

#define PI 3.14



float area(float); //prot�tipo da fun��o



int main(){

float raio,a;



printf("Digite o valor do raio\n");

scanf("%f",&raio);



a=area(raio); // chamada da fun��o



printf("\nA �rea da esfera �: %.2f\n",a);

system("pause");

return 0;	

}



float area(float r){

float ar;

ar=4*PI*r*r;

return ar;

}
