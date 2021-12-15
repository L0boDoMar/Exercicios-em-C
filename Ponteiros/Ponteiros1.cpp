#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int x,z,w,*y;
	
	x=25;
	y=&w; //y recebe o endereço de w
	*y=30;
	z= x+*y;
	
	printf("O valor de z é %d\n",z);
	system("pause");
	return 0;
}
