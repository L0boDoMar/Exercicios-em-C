/*Jogos de tabuleiro são atividades comuns de entretenimento na vida cotidiana das
pessoas. Uma de suas características é a necessidade do uso de um tabuleiro
com localizações bem definidas para o posicionamento de peças, podendo indicar
também as fases do jogo. No livro O Homem que Calculava, de Malba Tahan
(São Paulo: Record, 2002, p. 120), há uma história na qual um rei deveria efetuar
o pagamento pelos serviços de um de seus conselheiros, dando-lhe uma certa
quantidade de grãos de trigo a ser calculada da seguinte forma: coloca-se 1 grão
de trigo na primeira casa do tabuleiro, 2 na segunda casa, 4 na terceira casa, 8 na
quarta casa e assim dobrando-se sucessivamente até a última casa.

Considerando o tabuleiro 4 x 4 ilustrado acima, contendo a indicação da ordem das casas, construa um único algoritmo que:
a) calcule, armazene em uma estrutura e escreva em ordem a quantidade de grãos de trigo em cada casa do tabuleiro;
(valor: 8,0 pontos)
b) calcule, armazene em uma variável e escreva a quantidade total de grãos de trigo presentes no tabuleiro.
(valor: 2,0 pontos)
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int vet[16],i,j,acum;

int main(){
	for(i=0;i<16;i++){
		vet[i]=pow(2,i);
		acum=acum+vet[i];
	}
	//imprime quantidade de grãos em cada casa
	for(i=0;i<16;i++){
		printf("Quantidade de graos na casa %d = %d\n",i,vet[i]);
	}
	//imprime a quantidade total de grãos
	printf("Quantidade total de graos = %d\n",acum);
	
	
	
	system("pause");
	return 0;
}
