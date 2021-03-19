#include "Kitap.h" //Kitap ad�nda header dosyas� include edildi
#include <iostream> //Iostream k�t�phanesi include edildi
#include<string> //String k�t�phanesi include edildi
using namespace std; //std namespacesi kullan�ld�.

/*�ye de�i�kenlerine de�er atamak i�in
Set fonksiyonlar� tan�mland� ve gelen parametreler �ye de�i�kenine
e�itlendi.
*/
void Kitap::setAd(string isim){
	ad = isim;
}
void Kitap::setYazar(string yazarAdi){
	yazar=yazarAdi;
}
void Kitap::setTur(string turAdi){
	tur = turAdi;
}
void Kitap::setYayinEvi(string yayinEviAdi){
	yayinEvi = yayinEviAdi;
}
void Kitap::setIsbnNo(string IsbnNoAdi){
	isbnNo = IsbnNoAdi;
}
void Kitap::setSayfaSayisi(int alSayfaSayisi){
	sayfaSayisi = alSayfaSayisi;
}
void Kitap::setBaskiYili(int alBaskiYili){
	baskiYili = alBaskiYili;
}
void Kitap::setBaskiSayisi(int alBaskiSayisi){
	baskiSayisi = alBaskiSayisi;
}
void Kitap::setFiyat(double alFiyat){
	fiyat = alFiyat;
}

/*�ye de�i�kenlerinin de�erlerini �ekmek i�in
Get fonksiyonlar� tan�mland� ve �ye de�i�kenlerinin de�erleri
return edildi.
*/
string Kitap::getAd(){return ad;};
string Kitap::getYazar(){return yazar;};
string Kitap::getTur(){return tur;};
string Kitap::getYayinEvi(){return yayinEvi;};
string Kitap::getIsbnNo(){return isbnNo;};
int Kitap::getSayfaSayisi(){return sayfaSayisi;};
int Kitap::getBaskiYili(){return baskiYili;};
int Kitap::getBaskiSayisi(){return baskiSayisi;};
double Kitap::getFiyat(){return fiyat;};

