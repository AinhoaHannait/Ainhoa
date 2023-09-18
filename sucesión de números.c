#include <stdio.h>

// programa que imprime la sucesión 1 -1 2 -2 3 -3 4 -4 5 -5... (número positivo con su negativo)

int main ()
{
	int i, e, n;
	
	printf ("Hasta que numero quieres que llegue la sucecesion?\n");
	scanf ("%d", &n);

	for (i=1; i<=n; i++)
	{
	printf ("%d ", i);
		if (i<=n)
		{
			e = i * -1;
			printf ("%d ", e);
		}
	}
		
	
	return 0;
}
