#include<stdio.h>
#include<stdlib.h>
#define PI 3.14



float func1(int r);// prot�tipo da fun��o



int main(){

int raio;

float func1,resultado;



resultado= func1(raio); //chamada de fun��o soma(20,5.5)



printf("\nO resultado da soma �: %.2f\n",r);



system("pause");

return 0;	

}



float func1(int r){ //fun��o com retorno

float area;

printf("Entre com o valor do raio:\n");
scanf("%d",&r);

area= 4*PI*r*r;	

return area;

}
