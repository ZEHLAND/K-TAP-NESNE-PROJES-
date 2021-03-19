#include "Kitap.h" //Kitap ad�nda header dosyas� include edildi
#include "Kitaplik.h" //Kitap ad�nda header dosyas� include edildi
#include <iostream> //Iostream k�t�phanesi include edildi
#include<string> //String k�t�phanesi include edildi
using namespace std; //std namespacesi kullan�ld�.

Kitap * pKitap[10]; //Kitaplar� Tutacak 10 Boyutlu Pointer Dizisi Tan�mland�

int Kitaplik::kitapliktaKitapSayisi(){ //Kitapl�ktaki say�lar� g�sterecek fonksiyon
	int i,sayac=0; //sayac kitapl�kta olan kitaplar� sayacak
	int diziBoyutu = sizeof(kitaplikDizisi)/sizeof(*kitaplikDizisi); // Toplam dizi boyutu
	for(i=0;i<diziBoyutu ;i++){ //Dizi boyutuna kadar sayd�r
		if(kitaplikDizisi[i] != 0) // dizide 0 olmayan doludur 
			sayac++; // 0 olmayanlar� yani dolu olanlar� say
	}
	return sayac; //return et
}

//Kitaplar� k�t�phaneye ekleecek fonksiyon
void Kitaplik::kitapEkle(string setAd,string setYazar,string setTur,string setYayinEvi,string setIsbnNo,int setSayfaSayisi,int setBaskiYili,int setBaskiSayisi,double setFiyat){
	int bosYer = 10-kitapliktaKitapSayisi(),i; //Kitapl�kta olan bo� yer say�s�
	if(bosYer == 0) //E�e bo� yer yoksa
		cout << "---------------\nKitapl�kla Bo� Yer Yok...\n---------------\n\n"; //Hata ver
	else{ //Bo� yer varsa
		for(i=0;i<10;i++){ //1-10 aras� d�ng� olu�tur
			if(kitaplikDizisi[i] == 0){ //�lk g�rd���n bo�lu�a
				
				pKitap[i] = new Kitap; //Kitap Class�ndan Pointer Kitap Dizisinden nesne olu�turuldu
				pKitap[i]->setAd(setAd); //Kitap class� i�indeki set fonksiyon ile ad tan�mland�
				pKitap[i]->setYazar(setYazar); //Kitap class� i�indeki set fonksiyon ile yazar tan�mland�
				pKitap[i]->setTur(setTur); //Kitap class� i�indeki set fonksiyon ile tur tan�mland�
				pKitap[i]->setYayinEvi(setYayinEvi); //Kitap class� i�indeki set fonksiyon ile yay�n evi tan�mland�
				pKitap[i]->setIsbnNo(setIsbnNo); //Kitap class� i�indeki set fonksiyon ile isbnNo tan�mland�
				pKitap[i]->setSayfaSayisi(setSayfaSayisi); //Kitap class� i�indeki set fonksiyon ile sayfa say�s� tan�mland�
				pKitap[i]->setBaskiYili(setBaskiYili); //Kitap class� i�indeki set fonksiyon ile bask� y�l� tan�mland�
				pKitap[i]->setBaskiSayisi(setBaskiSayisi); //Kitap class� i�indeki set fonksiyon ile bask� say�s� tan�mland�
				pKitap[i]->setFiyat(setFiyat); //Kitap class� i�indeki set fonksiyon ile fiyat tan�mland�
				
				break; //Kitap ekledikten sonra d�ng�den ��k
			}
		}
		kitaplikDizisi[i] = (i+1); //Kitapl��� tutan dizide o sat�r� dolu yap
		cout << "---------------\nKitapl��a Kitap Ba�ar�yla Eklendi...\n---------------\n\n"; //Ba�ar� mesaj� bast�r.
	}
}

void Kitaplik::kitaplar(){ //Kitapl�ktaki kitap bilgilerini �ekecek fonksiyon
	int i; //D�ng� i�in i tan�mland�
	cout << "\n---------------";
	for(i=0;i<kitapliktaKitapSayisi();i++){ //D�ng� 0 dan kitapl�ktaki kitap say�s�na kadar �al��t�r
		cout << endl << "Kitab�n Ad�: " << pKitap[i]->getAd(); //Get fonksiyonu ile ad bast�r�ld�
		cout << endl << "Kitab�n Yazar�: " << pKitap[i]->getYazar(); //Get fonksiyonu ile yazar bast�r�ld�
		cout << endl << "Kitab�n T�r�: " << pKitap[i]->getTur(); //Get fonksiyonu ile t�r bast�r�ld�
		cout << endl << "Kitab�n Yay�n Evi: " << pKitap[i]->getYayinEvi(); //Get fonksiyonu ile yay�n evi bast�r�ld�
		cout << endl << "Kitab�n IsbnNo: " << pKitap[i]->getIsbnNo(); //Get fonksiyonu ile isbnNo bast�r�ld�
		cout << endl << "Kitab�n Sayfa Say�s�: " << pKitap[i]->getSayfaSayisi(); //Get fonksiyonu ile sayfa say�s� bast�r�ld�
		cout << endl << "Kitab�n Bask� Y�l�: " << pKitap[i]->getBaskiYili(); //Get fonksiyonu ile bask� y�l� bast�r�ld�
		cout << endl << "Kitab�n Bask� Say�s�: " << pKitap[i]->getBaskiSayisi(); //Get fonksiyonu ile bask� say�s� bast�r�ld�
		cout << endl << "Kitab�n Fiyat�: " << pKitap[i]->getFiyat()<<endl; //Get fonksiyonu ile kitab�n Fiyat� bast�r�ld�
	}
	cout << "\n---------------\n\n";
}
