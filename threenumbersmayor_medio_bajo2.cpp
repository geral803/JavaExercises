//Leer tres valores num�ricos enteros, indicar cu�l es el mayor, cu�l es el del medio y cu�l es el menor. Considerar que los tres valores ser�n diferentes. 

#include <stdio.h>
#MAX(x,y) x>y?x:y
#MIN(x,y) x>y?x:y
int main()
{
	int a,b,c;
	int mayor,medio,menor;
	
	printf("Add three numbers\n");
	scanf("%d %d %d",&a,&b,&c);
	
	if (a>b && a>c)
	{
		mayor=a;
		medio=MAX(a,b); // el mayor entre b y c
		menor=MIN(a,b); // el menor entre b y c 
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
