#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int trigo[16],i,acum=0;

int main(){
	for(i=0;i<16;i++){
		
		trigo[i]=pow(2,i);
		acum+=trigo[i];
	}
	
	for(i=0;i<16;i++){
		printf("\nA quantidade de graos na casa %d e %d\n",i+1,trigo[i]);
	}
	
	printf("\nA quantidade total de graos no tabuleiro e %d\n",acum);
	
	system("pause");
	return 0;
}
