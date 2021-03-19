#include <iostream> //Iostream k�t�phanesi include edildi
#include "Kitap.h" //Kitap ad�nda header dosyas� include edildi
#include<string> //String k�t�phanesi include edildi
#include<locale.h>  // T�rk�e karakter k�t�phanesi include edildi
using namespace std; //std namespacesi kullan�ld�.

int main() {
	setlocale(LC_ALL, "Turkish"); 
	string ad,yazar,tur,yayinEvi,isbnNo; //string tipinde private �yeler tan�mland�
	int sayfaSayisi,baskiYili,baskiSayisi; //int tipinde private �ye tan�mland�
	double fiyat; //double tipinde private �ye tan�mland�
	int secim;
	
	Kitap kitapNesnesi; // Kitap Class�ndan kitapNesnesi ad�nda nesne olu�turuldu.
	
	/*Kullan�c�dan De�erler Al�n�p de�i�kenlere at�ld� */
	cout << "L�tfen Kitab�n Ad�n� Girin : ";
	cin >> ad;
	cout << "L�tfen Yazar�n� Girin : ";
	cin >> yazar;
	cout << "L�tfen Kitab�n T�r�n� Girin : ";
	cin >> tur;
	cout << "L�tfen Kitab�n Yay�nevini Girin : ";
	cin >> yayinEvi;
	cout << "L�tfen isbnNo Girin : ";
	cin >> isbnNo;
	cout << "L�tfen Kitab�n Sayfa Say�s�n� Girin : ";
	cin >> sayfaSayisi;
	cout << "L�tfen Kitab�n Bask� Y�l�n� Girin : ";
	cin >> baskiYili;
	cout << "L�tfen Kitab�n Bask� Say�s�n� Girin : ";
	cin >> baskiSayisi;
	cout << "L�tfen Kitab�n Fiyat�n� Girin : ";
	cin >> fiyat;
	
	/* Olu�turdu�um nesnenin set fonksiyonlar�na parametre g�nderilip 
	�ye de�i�kenlere de�er atand�*/
	kitapNesnesi.setAd(ad);
	kitapNesnesi.setYazar(yazar);
	kitapNesnesi.setTur(tur);
	kitapNesnesi.setYayinEvi(yayinEvi);
	kitapNesnesi.setIsbnNo(isbnNo);
	kitapNesnesi.setSayfaSayisi(sayfaSayisi);
	kitapNesnesi.setBaskiYili(baskiYili);
	kitapNesnesi.setBaskiSayisi(baskiSayisi);
	kitapNesnesi.setFiyat(fiyat);
	
	/*Ekrana Bilgi Yaz�s� Bast�r�ld�*/
	cout << endl << "------------------------------------------------------------------" << endl << "Sorgulama Ekran� L�tfen Sorgulama Yapmak �stedi�iniz Numaray� Girin" << endl << "------------------------------------------------------------------"<<endl;
 
 	// Kullan�c�dan S�rekli Sorgulama Yapmas� ��in Do While D�ng�s� Olu�turuldu.
	do{
		cout << "1-Kitap Ad�\n2-Yazar Ad�\n3-Kitab�n T�r�\n4-Kitab�n Yay�nevi\n5-Kitab�n isbnNo\n6-Kitab�n Sayfa Say�s�\n7-Kitab�n Bask� Y�l�\n8-Kitab�n Bask� Say�s� Ad�\n9-Kitab�n Fiyat�\n0-��k��\n";
		cout << "Se�iminiz : ";
		cin  >> secim;
		/*Bilgiler Ekrana yazd�r�l�p se�imi de�i�kene aktar�ld�*/
		
		if(secim == 1) //Se�im 1 ise
			cout << kitapNesnesi.getAd() << endl << endl; // Ad� �a��r
		else if(secim == 2) // Se�im 2 ise
			cout << kitapNesnesi.getYazar() << endl << endl; // Yazar� �a��r
		else if(secim == 3) //Se�im 3 ise
			cout << kitapNesnesi.getTur() << endl << endl; // Turu �a��r
		else if(secim == 4) // Se�im 4 ise 
			cout << kitapNesnesi.getYayinEvi() << endl << endl; // Yay�nevini �a��r
		else if(secim == 5) // Se�im 5 ise
			cout << kitapNesnesi.getIsbnNo() << endl << endl; //IsbnNo �a��r
		else if(secim == 6) //Se�im 6 ise 
			cout << kitapNesnesi.getSayfaSayisi() << endl << endl; // Sayfa Say�s�n� �a��r
		else if(secim == 7) //Se�im 7 ise
			cout << kitapNesnesi.getBaskiYili() << endl << endl; // Bask� Y�l�n� �a��r
		else if(secim == 8) //Se�im 8 ise
			cout << kitapNesnesi.getBaskiSayisi() << endl << endl; //Bask� Say�s�n� �a��r
		else if(secim == 9) //Se�im 9 ise
			cout << kitapNesnesi.getFiyat() << endl << endl; //Fiyat� �a��r
		else if(secim == 0) //Se�im 0 ise
			break; // Program� Sonland�r
		else{ //Se�im 0-9 Aras� de�iklse
			break; // Program� sonland�r
			cout << "Yanl�� Se�im Program Sonland�r�ld�." << endl; //Uyar� Mesaj� Ver
		}
			
	}while(secim != 0); //Se�im 0 olana kadar �al��t�r.
	
	
	return 0;
}
