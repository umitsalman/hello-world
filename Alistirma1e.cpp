#include <stdio.h>
#include <math.h>

main()
{
	printf("n\t2^n");
	printf("\n------------\n");
	
	int i;
	for(i = 0; i <= 16; i++)
	{
		printf("%2d\t%5.0f\n", i, pow(2,i));
	}	
}
