/*Exemplo de uma fun��o para somar 2 n�meros, sendo um float e
um inteiro:
*/

#include<stdio.h>
#include<stdlib.h>

void soma(int,float); //prot�tipo da fun��o
//tipo + nome+ tipo das v�riaveis


int main(){
	
int n1;
float n2;

printf("Digite um numero inteiro?\n");
scanf("%d",&n1);
printf("Digite um numero real:\n");
scanf("%f",&n2);	

soma(n1,n2);//chamada de fun��o
	
	system("pause");
	return 0;
}

/*o nome da variavel n�o importa, e sim o tipo e a ordem*/
void soma(int a,float b ){ //fun��o sem retorno

float resultado;

resultado=a+b;

printf("Resultado da soma= %.2f\n",resultado);
	
}

