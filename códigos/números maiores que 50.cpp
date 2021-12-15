#include<stdio.h>
#include<stdlib.h>

int i,v[10], cont;

int main(){
	for(i=0;i<10;i++){
		printf("Digite um número\n");
		scanf("%d", &v[i]);
		if(v[i]>50){
			cont++;
		}
	}
	printf("\n Há %d números maiores que 50\n", cont);
	
	system("pause");
	return 0;
}
