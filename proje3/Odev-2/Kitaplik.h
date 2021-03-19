#include <iostream> //Iostream k�t�phanesi include edildi
using namespace std; //std namespacesi kullan�ld�

class Kitaplik{ //Kitapl�k ad�nda class tan�mland�
	private:
		int kitaplikDizisi[10] = {0,0,0,0,0,0,0,0,0,0}; //Kitaplar� tutacak dizi private olarak tan�mland�
	public: 
		int kitapliktaKitapSayisi(); //Kitapl�ktaki kitaplar� sayan fonksiyon public olarak tan�mland�
		void kitapEkle(string,string,string,string,string,int,int,int,double); //Kitap eklemek i�in kitapEkle fonksiyonu public tan�mland�
		void kitaplar(); //Kitaplar� listemelek i�in kitaplar fonksiyonu public tan�mland�.
};


