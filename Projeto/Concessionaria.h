#ifndef CONCESSIONARIA_H
#define CONCESSIONARIA_H
#include<iostream>
#include<string>
using namespace std;

class Concessionaria
{
	protected:
		string cidade;
		double notaatendimento;
		double taxa; 
		string const vendedor; //Atributo constante
	
	public:		
		Concessionaria(string, double, double, string const &);
		~Concessionaria();
		
		//getters
		string getcidade();
		double getnotaatendimento();
		double gettaxa();
		string getvendedor() const;
		
		//setters
		void setcidade(string);
		void setnotaatendimento(double);
		void settaxa(double);
		//void getvendedor(string);
		
		virtual double valortotalcompra() const;
		virtual void mostra();
		
		friend double aumentataxa(Concessionaria);		

};
#endif
