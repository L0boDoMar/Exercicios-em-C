#include<stdio.h>
#include<stdlib.h>

int v1[5],v2[5],v3[5],i;

int main(){
for(i=0;i<5;i++){
	printf("Digite um valor para o vetor 1:\n");
	scanf("%d",&v1[i]);	
	printf("Digite um valor para o vetor 2:\n");
	scanf("%d",&v2[i]);
	v3[i]=v1[i]*v2[i];
}
for(i=0;i<5;i++){
	printf("\nv3[%d]=%d\n",i,v3[i]);

}
system("pause");
return 0;


}
