#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	int numDado, suma, b, c, d,f;
	int x = 6;
	int a=0;
	
	
	srand(time (NULL));	
	while (suma<=50)
	{
		numDado = 1+rand()% (x+1-1);
		printf("El numero del dado es:%d\n",numDado);
		
		suma += numDado;
		numDado++;

	}
	printf("El numero 1 aparece %d veces", a);

	
	
	return 0;

}
