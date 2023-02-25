#ifndef CARRO_H
#define CARRO_H
#include<iostream>
#include<string>
using namespace std;
#include "Concessionaria.h"
#include "Seguro.h"
class Seguro; //Para o metodo Friend

class Carro:public Concessionaria
{
     private:
    	int quantportas;
    	const string cor;
    	const string marca;
    	string modelo; 
    	double valor;
    	
    public:
    
	Carro(int, const string &, const string &, string, double, string, double, double, const string &);
	~Carro();
	
	//getters
	int getquantportas();
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
