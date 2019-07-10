//Leer tres valores numéricos enteros, indicar cuál es el mayor, cuál es el del medio y cuál es el menor. Considerar que los tres valores serán diferentes. 

#include <stdio.h>

int main()
{
	int a,b,c;
	int mayor,medio,menor;
	
	printf("Add three numbers\n");
	scanf("%d %d %d",&a,&b,&c);
	
	if (a>b && a>c)
	{
		mayor=a;
		medio=b>c?b:c; // el mayor entre b y c
		menor=b<c?b:c; // el menor entre b y c 
	}
	else
	{
		if(b>a && b>c)
	{
		mayor=b;
		medio=a>c?a:c;
		menor=a<c?a:c;
	}
	else
	{
			mayor=c;
			medio=b>a?b:a;
			menor=b<a?b:a;
	}
}
	printf("Mayor: %d\nMedio: %d\nMenor: %d\n",mayor,medio,menor);
	return 0; 
}
