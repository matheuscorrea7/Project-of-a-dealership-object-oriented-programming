#include<iostream>
#include<string>
using namespace std;
#include "Carro.h"
#include "Concessionaria.h"

	Carro::Carro(int portas, const string &c, const string &ma, string mo, double val, string cidade,double notaatendimento, double taxa, const string &vendedor):Concessionaria(cidade,notaatendimento,taxa,vendedor), quantportas(portas), cor(c), marca(ma), modelo(mo), valor(val) 
	{}
	
	Carro::~Carro()
	{
		cout << "Carro destruído" << endl;
	}
	
	//getters
	int Carro::getquantportas()
	{
		return quantportas;
	}
	string Carro::getcor() const
	{
		return cor;
	}
	string Carro::getmarca() const
	{
		return marca;
	}
	string Carro::getmodelo()
	{
		return modelo;
	}
	double Carro::getvalor()
	{
		return valor;
	}
	
	//setters
	void Carro::setquantportas(int novaquantportas)
	{
		quantportas = novaquantportas;
	}
	void Carro::setmodelo(string novomodelo)
	{
		modelo = novomodelo;
	}
	void Carro::setvalor(double novovalor)
	{
		valor = novovalor;
	}
		
	double Carro::valortotalcompra(Seguro s) const
	{
		return (valor + (valor * taxa) + s.valorseguro);
	}
	
	//Impressão
	void Carro::mostra() const	
	{
		cout << "Quantidade de portas: " << quantportas << endl;
		cout << "Cor: " << cor << endl;
		cout << "Marca: " << marca << endl;
		cout << "Modelo: " << modelo << endl;
		cout << "Valor: " << valor << endl;
	}


