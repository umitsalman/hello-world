#include <stdio.h>
#include <stdlib.h>

int main()

/* Bir cemberin yaricapini stdin(standart girdi) ile oku,
capini ve cevresini stdout'a(standart cikti) yaz.
Eger islem basarili olursa 0 dondur. */
	
{
	const double PI = 3.14159; /* ya da (4.0 * atan(1.0)) */
	int iYaricap; /* iYaricap: integer_Yaricap*/
	int iCap;
	double dCevre; /* dCevre: double_Cevre*/
	int iScanfSonuc;
	printf("Cemberin yaricapini giriniz:\n");
	iScanfSonuc = scanf("%d", &iYaricap);
	
	if (iScanfSonuc != 1)
	{
		fprintf(stderr, "Hata: Girilen deger bir sayi degildir.\n");
		exit(EXIT_FAILURE);
	}
	iCap = 2 * iYaricap;
	dCevre = PI * (double)iCap;
	printf("Yaricapi %d olan bir dairenin capi %d,\n", iYaricap, iCap);
	printf("cevresi ise %f olacaktir.\n", dCevre);
	return 0;
}
