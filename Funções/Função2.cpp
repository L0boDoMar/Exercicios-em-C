/*Calcule a �rea da esfera, cuja �rea �: 4pr2
, onde r � o raio e p=3.14. Construa um algoritmo usando fun��o e utilize
o prot�tipo.

*/

#include<stdio.h>
#include<stdlib.h>
#define PI 3.14

void area(float);

int main(){

float raio;

printf("Digite o raio da esfera:\n");
scanf("%f",&raio);

area(raio);
	
	system("pause");
	return 0;
}

void area(float raio){
	
float result;

result= 4*PI*raio*raio;

printf("A �rea da esfera e %.2f cm\n",result);
}

