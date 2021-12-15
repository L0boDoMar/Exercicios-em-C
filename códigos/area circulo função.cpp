#include<stdio.h>

#include<stdlib.h>

#define PI 3.14



float area(float); //protótipo da função



int main(){

float raio,a;



printf("Digite o valor do raio\n");

scanf("%f",&raio);



a=area(raio); // chamada da função



printf("\nA área da esfera é: %.2f\n",a);

system("pause");

return 0;	

}



float area(float r){

float ar;

ar=4*PI*r*r;

return ar;

}
