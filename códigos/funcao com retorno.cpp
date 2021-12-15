#include<stdio.h>
#include<stdlib.h>
#define PI 3.14



float func1(int r);// protótipo da função



int main(){

int raio;

float func1,resultado;



resultado= func1(raio); //chamada de função soma(20,5.5)



printf("\nO resultado da soma é: %.2f\n",r);



system("pause");

return 0;	

}



float func1(int r){ //função com retorno

float area;

printf("Entre com o valor do raio:\n");
scanf("%d",&r);

area= 4*PI*r*r;	

return area;

}
