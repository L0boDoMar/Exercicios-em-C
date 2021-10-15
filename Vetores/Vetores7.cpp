/*Fa�a um programa, utilizando uma estrutura que armazene os seguintes dados: 
quantidade de pe�as vendidas e o pre�o desta pe�a. A estrutura dever� armazenar
os dados de 10 vendedores. Lembrando que cada vendedor pode vender apenas um tipo
de pe�a, isto �,para cada vendedor existe apenas um pre�o.
Calcule e mostre:
-a quantidade total de pe�as vendidas por todos os vendedores;
-para cada vendedor calcule e mostre o valor total da venda, onde:
valor total da venda = quantidade de pe�as * o pre�o da pe�a*/

#include<stdio.h>
#include<stdlib.h>

int qntPecas[10], i, qntTotal;
float precoPecas[10], valorTotal[10];

int main(){
	
for(i=0;i<10;i++){
	printf("Informe a quantidade de pecas vendidas pelo vendedor %d:\n",i);
	scanf("%d",&qntPecas[i]);
	printf("Informe o pre�o desta peca:\n");
	scanf("%f",&precoPecas[i]);
	
	qntTotal=qntTotal+qntPecas[i];
	valorTotal[i]=qntPecas[i]*precoPecas[i];
	
}
for(i=0;i<10;i++){
	printf("Valor total das vendas do vendedor %d: R$ %.2f\n",i,valorTotal[i]);
}
	printf("Quantidade total de pecas vendidas: %d\n",qntTotal);

	
	system("pause");
	return 0;
}
