#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int x,z,w,*y;
	
	x=25;
	y=&w; //y recebe o endere�o de w
	*y=30;
	z= x+*y;
	
	printf("O valor de z � %d\n",z);
	system("pause");
	return 0;
}
