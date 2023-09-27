#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
// multiplicación de dos matrices random cuadradas

int main ()
{
	int i, j,k,  n;
	
	srand(time(NULL));
	
	printf ("Ingresa la longitud de tus matrices\n");
	scanf ("%d", &n);
	
	int A[n][n], B[n][n], C[n][n];
	
	printf ("Matriz A\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			A[i][j]= rand()% (9 +1 -1) +1;
			printf("%d ", A[i][j] );
		}
		printf("\n");
	}
	
	printf ("Matriz B\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			A[i][j]= rand()% (9 +1 -1) +1;
			printf("%d ", A[i][j] );
		}
		printf("\n");
	}
	
	printf ("Matriz C\n");
	int resultado;
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		 {
		 	resultado=0;
		 	for (k=0; k<n; k++)
		 	{
		 		resultado+= A[i][j] * B [i][j];
		 		
		 	}
		 	C[i][j]= resultado;
		 	printf ("%d ", C[i][j]);
		 }
		 printf ("\n");
	}
	
	
	
	return 0; 
}
