//Leer tres valores num�ricos enteros, indicar cu�l es el mayor, cu�l es el del medio y cu�l es el menor. Considerar que los tres valores ser�n diferentes. 

#include <stdio.h>

int main()
{
	int a,b,c;
	int mayor,medio,menor;
	
	printf("Add three numbers\n");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b)
	{
		if(b>c)
		{
			mayor=a;
			medio=b;
			menor=c;
		}
		else
		{
			mayor=a;
			medio=c;
			menor=b;
		}
	}
	else if(c<a)
		{
			mayor=b;
			medio=a;
			menor=c;
		}
		else
		{
			mayor=b;
			medio=c;
			menor=a;
		}
		
	  if(c>a)
	    if(a>b)
	    {
	    	mayor=c;
			medio=a;
			menor=b;
		}
		else{
			mayor=c;
			medio=b;
			menor=a;
		}


	printf("Mayor: %d\nMedio: %d\nMenor: %d\n",mayor,medio,menor);
	return 0; 
}
