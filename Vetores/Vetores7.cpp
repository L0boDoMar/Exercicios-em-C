/*Faça um programa, utilizando uma estrutura que armazene os seguintes dados: 
quantidade de peças vendidas e o preço desta peça. A estrutura deverá armazenar
os dados de 10 vendedores. Lembrando que cada vendedor pode vender apenas um tipo
de peça, isto é,para cada vendedor existe apenas um preço.
Calcule e mostre:
-a quantidade total de peças vendidas por todos os vendedores;
-para cada vendedor calcule e mostre o valor total da venda, onde:
valor total da venda = quantidade de peças * o preço da peça*/

#include<stdio.h>
#include<stdlib.h>

int qntPecas[10], i, qntTotal;
float precoPecas[10], valorTotal[10];

int main(){
	
for(i=0;i<10;i++){
	printf("Informe a quantidade de pecas vendidas pelo vendedor %d:\n",i);
	scanf("%d",&qntPecas[i]);
	printf("Informe o preço desta peca:\n");
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
