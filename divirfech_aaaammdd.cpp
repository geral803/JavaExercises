/* Se ingresa un valor numérico de 8 digitos que representa una fecha con el siguiente formato: aaaammdd.
Se pide información separada el día, el mes y el año de la fecha. 
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
