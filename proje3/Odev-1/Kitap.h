#include <iostream> //Iostream k�t�phanesi include edildi
using namespace std; //std namespacesi kullan�ld�.

class Kitap{ //Kitap ad�nda class tan�mland�
	private: //private �ye s�n�f� tan�mland�
		std::string ad,yazar,tur,yayinEvi,isbnNo; //string tipinde private �yeler tan�mland�
		int sayfaSayisi,baskiYili,baskiSayisi; //int tipinde private �ye tan�mland�
		double fiyat; //double tipinde private �ye tan�mland�
	public: //public �ye s�n�f� tan�mland�
		/*Set Fonksiyonlar�*/ 
		void setAd(string); //setAd ad�nda set fonksiyonu tan�mland�
		void setYazar(string); //setYazar ad�nda set fonksiyonu tan�mland�
		void setTur(string); //setTur ad�nda set fonksiyonu tan�mland�
		void setYayinEvi(string); //setYayinEvi ad�nda set fonksiyonu tan�mland�
		void setIsbnNo(string); //setIsbnNo ad�nda set fonksiyonu tan�mland�
		void setSayfaSayisi(int); //setSayfaSayisi ad�nda set fonksiyonu tan�mland�
		void setBaskiYili(int); //setBaskiYili ad�nda set fonksiyonu tan�mland�
		void setBaskiSayisi(int); //setBaskiSayisi ad�nda set fonksiyonu tan�mland� 
		void setFiyat(double);//setFiyat ad�nda set fonksiyonu tan�mland�
		
		/*Get Fonksiyonlar�*/
		string getAd(); //getAd ad�nda get fonksiyonu tan�mland�
		string getYazar(); //getYazar ad�nda get fonksiyonu tan�mland�
		string getTur(); //getTur ad�nda get fonksiyonu tan�mland�
		string getYayinEvi(); //getYayinEvi ad�nda get fonksiyonu tan�mland�
		string getIsbnNo(); //getIsbnNo ad�nda get fonksiyonu tan�mland�
		int getSayfaSayisi(); //getSayfaSayisi ad�nda get fonksiyonu tan�mland�
		int getBaskiYili(); //getBaskiYili ad�nda get fonksiyonu tan�mland�
		int getBaskiSayisi(); //getBaskiSayisi ad�nda get fonksiyonu tan�mland�
		double getFiyat(); //getFiyat ad�nda get fonksiyonu tan�mland�
};
