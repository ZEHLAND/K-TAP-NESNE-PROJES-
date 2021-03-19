#include "Nokta2D.h" //Kitap ad�nda header dosyas� include edildi
#include "Nokta3D.h" //Kitap ad�nda header dosyas� include edildi
#include <iostream> //Iostream k�t�phanesi include edildi
#include<string> //String k�t�phanesi include edildi
#include<locale.h> //T�rk�e karakter k�t�phanesi
#include<Math.h> //Matematik K�t�phanesi include edildi
using namespace std; //std namespacesi kullan�ld�.

int main(){
	setlocale(LC_ALL, "Turkish"); //T�rk�e karakter Kodu
	
	double x1,y1,z1,x2,y2,z2; //kordinat de�i�kenleri tan�mland�
	cout << "�lk Noktan�n x,y ve z kortinatlar�n� girin: "; //Kullan�c�dan 1.nokta al�nd�
	cin >> x1 >> y1 >> z1;
	cout << "�kinci Noktan�n x,y ve z kortinatlar�n� girin: "; //Kullan�c�dan 2.nokta al�dn�
	cin >> x2 >> y2 >> z2;
	
	Nokta3D A; //A noktas� olu�turuldu
	Nokta3D B; //B noktas� olu�turuldu
	A.setX(x1); //A noktas�n�n x de�eri verildi
	A.setY(y1); //A noktas�n�n y de�eri verildi
	A.setZ(z1); //A noktas�n�n z de�eri verildi
	B.setX(x2); //B noktas�n�n x de�eri verildi
	B.setY(y2); //B noktas�n�n y de�eri verildi
	B.setZ(z2); //B noktas�n�n z de�eri verildi
	
	cout << "�ki Nokta Aras�ndaki Uzakl�k: " << A.uzaklik(x1,y1,z1,x2,y2,z2); //A ile B aras�ndaki mesafe ayn� oldu�u i�in A.uzakik = B.uzaklik olup uzaklik fonksiyonu �a�r�ld�
	
	
	
	return 0;
}
