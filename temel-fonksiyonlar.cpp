/*
Temel Fonksiyonlar
puts(); = printf(); ekrana ��kt� verir. alt sat�ra kendili�inden iner->puts() \n e ihtiya� duymaz
gets(); =scanf(); // input yani d��ardan kullan�c� taraf�ndan de�er girme i�levi g�r�r. gets() sadece bir sat�r okumaz.
printf(); ekran ��kt�s� yazd�r�r
*/

/* scanf("..",&..);
*/

#include<stdio.h>
#include<conio.h>
int main() {
	int tc;
	printf("TC Giriniz:");
	scanf("%d",&tc); // d��ardan de�er al�r
	float virgullu; //double float yani ondal�kl� say�lar al�rken float de�i�ken tipini kullan�r�z.
	printf("Float deger gir:");
	scanf("%f",&virgullu);
	printf("TC NO: %d \n"),tc;
	printf("Girdiginiz float deger:%f",virgullu);
	
	
	
	return 0;
}
