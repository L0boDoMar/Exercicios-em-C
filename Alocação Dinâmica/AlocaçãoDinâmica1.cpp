#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float *y= (float*)malloc(sizeof(float));//Aloca a memória dinâmicamente
	*y=20.5;
	
	printf("%.2f\n",*y);
	
	free(y); //limpa o espaço alocado na RAM
	
	system("pause");
	return 0;
}
