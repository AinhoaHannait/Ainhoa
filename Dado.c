#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main ()
{
	int numDado, suma;
	int div1, div2, div3, div4, div5, div6;
	int x = 6;
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	int e=0;
	int f=0;
	
	
	
	srand(time (NULL));	
	while (suma<=50)
	{
		numDado = 1+rand()% (x+1-1);
		switch (numDado)
		{
			case 1:
				{
					a += numDado;
					break;
				}
			case 2:
				{
					b += numDado;
					break;
				}
			case 3:
				{
					c += numDado;
					break;
				}	
			case 4:
				{
					d += numDado;
					break;
				}
			case 5:
				{
					e += numDado;
					break;
				}
			case 6:
				{
					f += numDado;
					break;
				}			
				
		}
		printf("El numero del dado es:%d\n",numDado);
		
		suma += numDado;
		numDado++;

	}
	
	a = a/1;
	b = b/2;
	c = c/3;
	d = d/4;
	e = e/5;
	f = f/6;
	
	printf("1 aparece %d veces\n", a);
	printf("2 aparece %d veces\n", b);
	printf("3 aparece %d veces\n", c);
	printf("4 aparece %d veces\n", e);
	printf("5 aparece %d veces\n", e);
	printf("6 aparece %d veces\n", f);

	
	
	return 0;

}
