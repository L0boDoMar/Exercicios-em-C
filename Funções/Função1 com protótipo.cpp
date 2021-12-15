/*Exemplo de uma função para somar 2 números, sendo um float e
um inteiro:
*/

#include<stdio.h>
#include<stdlib.h>

void soma(int,float); //protótipo da função
//tipo + nome+ tipo das váriaveis


int main(){
	
int n1;
float n2;

printf("Digite um numero inteiro?\n");
scanf("%d",&n1);
printf("Digite um numero real:\n");
scanf("%f",&n2);	

soma(n1,n2);//chamada de função
	
	system("pause");
	return 0;
}

/*o nome da variavel não importa, e sim o tipo e a ordem*/
void soma(int a,float b ){ //função sem retorno

float resultado;

resultado=a+b;

printf("Resultado da soma= %.2f\n",resultado);
	
}

