#include <stdio.h>
#include <math.h>

main()
{
	int yaricap, yukseklik;
	printf("Yaricapi giriniz: "); scanf("%d", &yaricap);
	printf("Yuksekligi giriniz: "); scanf("%d", &yukseklik);
	
	const double PI = 3.14;
	int hacim;
	int alan;
	
	hacim = PI * pow(yaricap, 2) * yukseklik;
	alan = 2 * PI * yaricap * yukseklik;
	
	printf("Silindirin Alani %d ve hacmi %d'dir.", alan, hacim);
}
