// Dado un valor numérico entero, informar si es par o impar. 

#include <stdio.h>

int main()
{
	int a;
	
	printf("add a number, please\n");
	scanf("%d", &a);

	
	if(a%2)
	{
		printf("%d is pair",a);
	}
	else
	{
	
	printf("%d is odd",a);
	}
	return 0;
}
