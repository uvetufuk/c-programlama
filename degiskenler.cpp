#include<stdio.h>
/*
1 byte? 8 bit
Degisken Tipleri ve Formatlari
-int degisken tipi ve formati: 4 byte (32bit) -2 �zeri 16dan 2 �zeri 16 ya kadar de�er alabilir
-long degisken tipi ve formati: 8 byte(64bit) alan kaplar. int in uzun hali gibi %d
-short degisken tipi ve formati: 2 byte -2 �zeri 18 2 �zeri 18 e kadar devam eder integerin kisa hali gibi %d
-double degisken tipi ve formati: 8 byte (64bit) 14 basamak de�eri kadar sayi yerlestirilebilir. %f
-float degisken tipi ve formati: 4 byte (32bit) 6 basamak %f
-char degisken tipi ve formati: 1 byte (8bit) -127 +127 0 255 ASCI evrensel rakam ve harf listesi %c

*/


int main () // basla

{
	int adim=1; // integer tipinde adim degiskendi tanimlandi, adim degiskeni icerisine 0 degeri yerlestirildi.
	short adim1=1;
	long adim2=2;
	double ondalik=3.5648546;
	float ondalik1=3.8455;
	char karakter='A';
	char karakter1='A';
	printf("integer veri tipi adim: %d",adim,adim); // %d formati olarak adim degiskeni icindeki deger %d yazan yere yaz�l�r.
	printf("\n \t short degisken tipi: %d",adim1);
	printf("\n long degisken tipi: %d",adim2);
	printf("\n double degisken tipi: %f",ondalik);
	printf("\n float degisken tipi %f",ondalik1);
	printf("\n char degisken tipi: %c",karakter1);
	printf("\n char degisken tipi: %d",karakter);// ASCI tablosundaki kar��l���n� integer deger olarak ekrana ��kt�ya yazar.
	return 0; //bitir
	
	
}
