#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int numeroAleatorio, suma;
	int x=10;
	srand(time(NULL));
	while (suma<100)
	{
		numeroAleatorio=rand()% x+1;
		printf ("El numero aleatorio es: %d\n", numeroAleatorio);
		suma += numeroAleatorio;
		numeroAleatorio++;
	}
	printf ("La suma total es: %d", suma);
	
	
	return 0;
}
