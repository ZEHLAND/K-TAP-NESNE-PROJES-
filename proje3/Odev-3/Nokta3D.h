class Nokta3D : public Nokta2D{ //Nokta3D adl� class tan�mland� ve Nokta2D class�ndan kal�t�m ald�
	private: 
		double Z; //double Z de�i�kenli private �yesi tan�mland�
	public:
		void setZ(double); //setZ adl� public �yesi tan�mland�
		double uzaklik(double,double,double,double,double,double); //Uzakl�k fonksiyon public �yesi olarak tan�mland�
};
