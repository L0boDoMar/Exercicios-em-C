/*Faça um programa que preencha 1 vetor de
inteiros com 5 posições, e calcule e imprima um
segundo vetor que é resultado do incremento
de 2 do primeiro vetor*/

#include<stdio.h>
#include<stdlib.h>

int v1[5],v2[5],i;

int main(){
	
	for(i=0;i<5;i++){
		printf("Digite um valor:\n");
		scanf("%d",&v1[i]);
		
		v2[i]= v1[i]+2;
	}
	for(i=0;i<5;i++){
		printf("O valor da posicao %d do segundo vetor e %d\n",i,v2[i]);
	}
	
	system("pause");
	return 0;
}
