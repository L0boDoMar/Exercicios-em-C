//PASSAGEM POR REFERÊNCIA

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
	troca(&a,&b);//	A função troca recebe o endereço de memória das variáveis
	
	printf("\na=%d b=%d\n",a,b);
	system("pause");
	return 0;
}
