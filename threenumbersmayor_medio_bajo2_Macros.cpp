//Leer tres valores numéricos enteros, indicar cuál es el mayor, cuál es el del medio y cuál es el menor. Considerar que los tres valores serán diferentes. 

#include <stdio.h>

#define MAX(x,y) x>y?x:y
#define MIN(x,y) x<y?x:y
int main()
{
	int a,b,c;
	int mayor,medio,menor;
	
	printf("Add three numbers\n");
	scanf("%d %d %d",&a,&b,&c);
	
	if (a>b && a>c)
	{
		mayor=a;
		medio=MAX(b,c); // el mayor entre b y c
		menor=MIN(b,c); // el menor entre b y c 
	}
	else
	{
		if(b>a && b>c)
	{
		mayor=b;
		medio=MAX(a,c);
		menor=MIN(a,c);
	}
	else
	{
			mayor=c;
			medio=MAX(a,b);
			menor=MIN(a,b);
	}
}
	printf("Mayor: %d\nMedio: %d\nMenor: %d\n",mayor,medio,menor);
	return 0; 
}
