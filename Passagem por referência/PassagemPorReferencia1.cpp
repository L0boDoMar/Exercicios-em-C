//PASSAGEM POR REFER�NCIA

#include<stdio.h>
#include<stdlib.h>

void troca(int *pa, int *pb){
	
	int aux;
	
	aux=*pa; // aux=5
	*pa=*pb; // a=7
	*pb= aux;// b=7
}


int main(){
	
	int a=5, b=7;
	troca(&a,&b);//	A fun��o troca recebe o endere�o de mem�ria das vari�veis
	
	printf("\na=%d b=%d\n",a,b);
	system("pause");
	return 0;
}
