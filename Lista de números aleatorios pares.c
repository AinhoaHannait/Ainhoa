#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	int numeroAleatorio;
	int x=100;
	
	
	srand(time(NULL));
	
	while (numeroAleatorio<=100)
	{
		if (numeroAleatorio %2 ==0)
		{
			numeroAleatorio= rand()% x+1;
			printf("Numero par: %d\n", numeroAleatorio);
			numeroAleatorio++;
		}
		else
		{
			numeroAleatorio++;
		}
	}
	
	return 0;
}
