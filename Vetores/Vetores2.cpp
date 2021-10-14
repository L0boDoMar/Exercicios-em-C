/*Faça um programa que preencha um vetor com
10 números inteiros e depois imprima as
posições 5 e 8 deste vetor*/

#include<stdio.h>
#include<stdlib.h>

int v[10],i;

int main(){
	
	for(i=0;i<10;i++){
		
		printf("Digite um valor:\n");
		scanf("%d",&v[i]);
	}
	
	printf("Valor na posicao 5= %d\n",v[4]);
	printf("Valor na posicao 8= %d\n",v[7]);
	
	
	system("pause");
	return 0;
}
