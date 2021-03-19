#include "Nokta3D.h" //Kitap ad�nda header dosyas� include edildi
#include <iostream> //Iostream k�t�phanesi include edildi
#include<string> //String k�t�phanesi include edildi
#include<Math.h>
using namespace std; //std namespacesi kullan�ld�.

void Nokta3D::setZ(double zDegeri){ //Setz Fonksiyonu tan�mland�
	Z = zDegeri; //Parametre olarak gelen zDegeri adl� parametre Z primary �yesine aktar�ld�.
}

double Nokta3D::uzaklik(double Ax1,double Ay1, double Az1, double Bx1, double By1,double Bz1){ //Uzakl�k Hesab�
	return sqrt(pow((Ax1-Bx1),2) + pow((Ay1-By1),2) + pow((Az1-Bz1),2));
}
