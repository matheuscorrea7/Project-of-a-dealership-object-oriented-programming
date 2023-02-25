#ifndef MOTO_H
#define MOTO_H
#include<iostream>
#include<string>
using namespace std;
#include "Concessionaria.h"
#include "Seguro.h"
class Seguro; //Para o metodo Friend

class Moto:public Concessionaria
{
    private:
    	const string cor;
    	const string marca;
    	string modelo; 
    	double valor;
    	
    public:
    
	Moto(const string &, const string &, string, double, string,double,double, const string &);
	~Moto();
	
	//getters
	string getcor() const; //Atributo constante
	string getmarca() const; //Atributo constante
	string getmodelo();
	double getvalor();
	
	
	//setters
	void setquantportas(int);
	//void setcor(string) const; Não é utilizavel pois o atributo é constante
	//void setmarca(string) const; Não é utilizavel pois o atributo é constante
	void setmodelo(string);
	void setvalor(double);
	
	
	double valortotalcompra(Seguro) const; //Metodo friend 
	
	//Impressão
	void mostra() const;
















};
#endif
