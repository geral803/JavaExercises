/* Se ingresa un valor num�rico de 8 digitos que representa una fecha con el siguiente formato: aaaammdd.
Se pide informaci�n separada el d�a, el mes y el a�o de la fecha. 
*/

#include <stdio.h>

int main()
{
	int dia,mes,anio,temp;
	long fecha;
	
	printf("add a date:aaaammdd:\n");
	scanf("%ld",&fecha);
	
	temp=fecha/100;
	dia=fecha%100;
	anio=temp/100;
	mes=temp%100;
	
//	printf("temp %d\n",temp);
	printf("Date %d\n anio:%d\n mes: %d\n dia: %d\n",fecha,anio,mes,dia);
	return 0; 
	
}
