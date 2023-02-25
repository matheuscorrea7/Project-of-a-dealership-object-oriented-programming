#ifndef Seguro_H
#define Seguro_H
#include<iostream>
#include<string>
#include "Carro.h"
#include "Moto.h"
class Seguro
{ 
	protected:
		double valorseguro;
	public:
		
		Seguro(double);
		~Seguro();
		
		//setters
		void setvalorseguro(double);
		
		friend class Carro;
		friend class Moto;
		
};
#endif
