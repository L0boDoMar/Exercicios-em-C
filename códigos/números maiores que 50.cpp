#include<stdio.h>
#include<stdlib.h>

int i,v[10], cont;

int main(){
	for(i=0;i<10;i++){
		printf("Digite um n�mero\n");
		scanf("%d", &v[i]);
		if(v[i]>50){
			cont++;
		}
	}
	printf("\n H� %d n�meros maiores que 50\n", cont);
	
	system("pause");
	return 0;
}
