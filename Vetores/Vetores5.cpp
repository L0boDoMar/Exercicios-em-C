/*Escreva um programa que receba a altura e peso de 5
pessoas. Calcule e armazene os valores de IMC de cada
pessoa em um vetor chamado imc, ao final imprima os
IMC das seguintes pessoas: 1ª, 3ª e 5ª.
O IMC é calculado da seguinte forma:
IMC = peso / altura2*/

#include<stdio.h>
#include<stdlib.h>

int i;
float altura[5],peso[5],imc[5];

int main(){
	
	for(i=0;i<5;i++){
		
		printf("Digite o peso:\n");
		scanf("%f",&peso[i]);
		printf("Digite a altura:\n");
		scanf("%f",&altura[i]);
		
		imc[i]= peso[i]/(altura[i]*altura[i]);
	}
	printf("O IMC da primeira pessoa e %.2f kg\n",imc[0]);
	printf("O IMC da terceira pessoa e %.2f kg\n",imc[2]);
	printf("O IMC da quinta pessoa e %.2f kg \n",imc[4]);
	
	system("pause");
	return 0;
}
