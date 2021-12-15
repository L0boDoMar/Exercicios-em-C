#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

void calculo(float n, float *quad, float *cubo, float *raiz);

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float n,quad,cubo,raiz;
	
	printf("Digite um número:\n");
	scanf("%f",&n);
	
	calculo(n,&quad,&cubo,&raiz);
	
	printf("n ao quadrado= %.2f\nn ao cubo= %.2f\nraiz de n=%.2f",quad,cubo,raiz);
	
	system("pause");
	return 0;
}

void calculo(float n, float *quad, float *cubo, float *raiz){
	
	 *quad=pow(n,2);
	 *cubo=pow(n,3);
	 *raiz=sqrt(n); //*raiz=pow(n,1.0/2.0);
	
}
