/*Transforme a temperatura de Fahrenheit para
Celsius usando uma função sem o uso de protótipo.
Fórmula para conversão:
Celsius = (Fahrenheit - 32) * 5 / 9*/

#include<stdio.h>
#include<stdlib.h>

float celsius(float f){
	
	float result;
	
	result= (f-32)/1.8;
	
	return result;
}


int main(){
	
	float f,result;
	
	printf("Informe a temperatura em °F\n");
	scanf("%f",&f);
	
	result= celsius(f);
	printf("%.2f °F equivalem a %.2f °C\n",f,result);
	
	
	system("pause");
	return 0;
}
