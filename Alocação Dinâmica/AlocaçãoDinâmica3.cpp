#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void quadrado(int *num){
	
	*num=pow(*num,2);
	
}

int main(){
	
	int *n=(int*)malloc(sizeof(int));
	
	printf("Digite um numero:\n");
	scanf("%d",n);
	
	quadrado(n);
	
	printf("O numero ao quadrado e %d\n",*n);
	
	free(n);
	system("pause");
	return 0;
}
