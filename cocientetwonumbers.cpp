//Leer dos numéricos enteros e informar su cociente.

#include <stdio.h>

int main()
{
	int a,b;
	double c; 
	
	printf("add two numbers\n");
	scanf("%d %d",&a,&b);
	
	if(b==0)
	{
		printf("Error!! You can't divide by zero'");
	
	}
	else
	{
	
		c=(double)a/b;
		printf("%d / %d = %lf",a,b,c);
	}	
	return 0;
}
