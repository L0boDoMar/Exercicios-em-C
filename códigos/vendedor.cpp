#include<stdio.h>

#include<stdlib.h>



int mat[4][4],i,j;



int main(){

for(i=0;i<4;i++){

for(j=0;j<4;j++){
	
	printf("Digite um valor\n");
	scanf("%d",&mat[i][j]);
}
}
for(i=0;i<4;i++){

for(j=0;j<4;j++){
	
	printf("[%d][%d]=%d\n",i,j,mat[i][j]);

}
}
	

system("pause");

return 0;	
}
