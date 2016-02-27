#include <stdio.h>

main()
{
	printf("Alt Siniri Giriniz: "); int alts; scanf("%d", &alts);
	printf("Ust Siniri Giriniz: "); int usts; scanf("%d", &usts);
	
	int i;
	for(i = alts; i<= usts; i++)
	{
		printf("%d ", i);
	}
	
	printf("\nBu Kadar!");
	
}
