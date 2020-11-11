/*
Temel Fonksiyonlar
puts(); = printf(); ekrana çýktý verir. alt satýra kendiliðinden iner->puts() \n e ihtiyaç duymaz
gets(); =scanf(); // input yani dýþardan kullanýcý tarafýndan deðer girme iþlevi görür. gets() sadece bir satýr okumaz.
printf(); ekran çýktýsý yazdýrýr
*/

/* scanf("..",&..);
*/

#include<stdio.h>
#include<conio.h>
int main() {
	int tc;
	printf("TC Giriniz:");
	scanf("%d",&tc); // dýþardan deðer alýr
	float virgullu; //double float yani ondalýklý sayýlar alýrken float deðiþken tipini kullanýrýz.
	printf("Float deger gir:");
	scanf("%f",&virgullu);
	printf("TC NO: %d \n"),tc;
	printf("Girdiginiz float deger:%f",virgullu);
	
	
	
	return 0;
}
