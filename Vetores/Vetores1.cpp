/*Faça um programa para criar um vetor de
números inteiros com 20 posições. Preencha e
imprima o vetor.*/

#include<stdio.h>
#include<stdlib.h>

int v[20],i;


int main(){
	
	for(i=0;i<20;i++){
		printf("Digite um valor: \n");
		scanf("%d",&v[i]);
			
	}
	for(i=0;i<20;i++){
			printf("O valor armanezado na posicao %d do vetor e: %d\n",i,v[i]);
		}
	system("pause");
	return 0;
}
