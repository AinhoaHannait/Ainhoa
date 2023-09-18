#include <stdio.h>
#include <math.h>

// programa que calcula la suma de los cuadrados de n números enteros

int main ()
{
	int i, n;
	int suma = 0;
	
	printf("Escribe el numero entero del cual deseas calcular la suma de sus cuadrados\n");
	scanf ("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		suma += pow(i,2);
		
	}
	printf ("El resultado de la suma es: %d", suma);
	
	return 0;
}
