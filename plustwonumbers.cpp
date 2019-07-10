// Leer dos valores enteros e informar su suma

#include <stdio.h>

int main()
{
	int valor1, valor2,suma;
	
	printf("Please, add a number\n");
	scanf("%d %d",&valor1,&valor2);

	suma=valor1+valor2; 
	
	printf("%d + %d = %d",valor1,valor2,suma);
	
	return 0;
}
