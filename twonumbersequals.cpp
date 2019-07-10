//Leer dos valores numéricos enteros e indicar cuál es el mayor y cuál es el menor. Considerar que ambos valores son diferentes. 

#include <stdio.h>

int main()
{
	int num1, num2;
	int mayor,menor; 
	printf("Add two numbers\n");
	scanf("%d %d", &num1, &num2);
	
	if(num1 != num2)
	{
		if(num1>num2)
		{
			mayor= num1;
			menor=num2;
		}
		else
		{
			mayor= num2;
			menor= num1;
			
		}
			printf("Mayor: %d\nMenor: %d\n",mayor,menor);
	}
	else
	{
		printf("%d is equal to %d",num1,num2);
	}
	
		
	return 0; 	
}
