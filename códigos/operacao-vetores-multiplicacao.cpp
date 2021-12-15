#include<stdio.h>
#include<stdlib.h>

int v1[5], v2[5], i;

int main()
{
	for (i = 0; i < 5; i++)
	{
		printf("Digite um valor para o vetor 1:\n");
		scanf("%d", &v1[i]);
		v2[i] = v1[i] + 2;
	}
	for (i = 0; i < 5; i++)
	{
		printf("\nv2[%d]=%d\n", i, v2[i]);
	}
	system("pause");
	return 0;
}
