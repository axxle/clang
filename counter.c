#include <stdio.h>

int main (void) 
{
	printf ("It is Counter app \n");
	int i = 0;
	while (i<1000) {
		printf ("%d \n", i++);
	}
	printf ("end!");
}
