#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float *y= (float*)malloc(sizeof(float));//Aloca a mem�ria din�micamente
	*y=20.5;
	
	printf("%.2f\n",*y);
	
	free(y); //limpa o espa�o alocado na RAM
	
	system("pause");
	return 0;
}
