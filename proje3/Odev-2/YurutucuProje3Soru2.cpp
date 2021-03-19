#include <iostream> //Iostream k�t�phanesi include edildi
#include "Kitaplik.h" //Kitap ad�nda header dosyas� include edildi
#include<string> //String k�t�phanesi include edildi
#include<locale.h>  // T�rk�e karakter k�t�phanesi include edildi
using namespace std; //std namespacesi kullan�ld�.

int main(){
	setlocale(LC_ALL, "Turkish");  //T�rk�e karakter kodu
	
	int secim,sayfaSayisi,baskiYili,baskiSayisi; //Kullan�c�lardan al�nacak de�erler ve se�im de�i�keni tan�mland�
	string ad,yazar,tur,yayinEvi,isbnNo; //Kullan�c�dan al�nacak string de�erler tan�mland�
	double fiyat; //Kullan�c�dan al�nacak fiyat tan�mland�
	
	Kitaplik benimKitapligim; //benimKitapligim ad�nda kitapl�k nesnesi olu�turuldu
	
	while(1){ //Kullan�c� kendi ��kana kadar sonsuz d�ng� olu�turuldu
		cout << "1-Kitap Ekle\n2-Kitapl�ktaki Kitap Say�s�\n3-T�m Kitaplara Ait Bilgiler\n0-��k��\n\nSe�iminiz: "; //Bilgi Mesaj� verildi
		cin >> secim; //se�im al�nd�
		if(secim==1){ //Se�im 1 ile Kullan�c�dan kitap eklemek i�in bilgiler al�nd�
			cout << "Kitap Ad�n� Girin: ";
			cin >> ad;
			cout << "Kitab�n Yazar�n� Girin: ";
			cin >> yazar;
			cout << "Kitab�n T�r�n� Girin: ";
			cin >> tur;
			cout << "Kitab�n Yay�n Evini Girin: ";
			cin >> yayinEvi;
			cout << "Kitab�n isbnNo Girin: ";
			cin >> isbnNo;
			cout << "Kitab�n Sayfa Say�s�n� Girin: ";
			cin >> sayfaSayisi;
			cout << "Kitab�n Bask� Y�l�n� Girin: ",
			cin >> baskiYili;
			cout << "Kitab�n Bask� Say�s�n� Girin: ";
			cin >> baskiSayisi;
			cout << "Kitab�n Fiyat�n� Girin: ";
			cin >> fiyat;
			
			benimKitapligim.kitapEkle(ad,yazar,tur,yayinEvi,isbnNo,sayfaSayisi,baskiYili,baskiSayisi,fiyat);
			//benimKitapligim nesnesine tan�ml� kitapEkle fonksiyonu ile kitapl��a kitap eklendi.	
		}
		else if(secim==2) //Se�im 2 ise kitapl�ktaki toplam kitap say�s�n� bast�r
			cout << "---------------\nKitapl�kta Toplam : " << benimKitapligim.kitapliktaKitapSayisi() << " Adet Kitap Mevcut\n---------------\n\n";
		else if(secim==3) //Se�im 3 ise kitapl�ktaki kitaplar�n bilgilerini bast�r
			benimKitapligim.kitaplar();
		else if(secim == 0) //Se�im 0 ise d�ng�y� sonland�r.
			break;
		else{ // se�im 0-1-2-3 d���nda bir �ey ise hata bast�r�p d�ng�den ��k
			cout << "Hatal� Tu�lama Yap�ld�.";
			break;
		}
		
	}
	cout << "\nProgram Sonland�r�ld�."; //Program� biti� mesaj� bast�r.
	
	
	return 0;
}

