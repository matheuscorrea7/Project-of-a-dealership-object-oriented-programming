#include<iostream>
#include<string>
using namespace std;
#include "Moto.h"
#include "Concessionaria.h"


	Moto::Moto(const string &c, const string &ma, string mo, double val, string cidade,double notaatendimento, double taxa, const string &vendedor):Concessionaria(cidade, notaatendimento, taxa, vendedor), cor(c), marca(ma), modelo(mo), valor(val){ }
	
	Moto::~Moto()
	{
		cout << "Carro destruído" << endl;
	}
	
	//getters
	string Moto::getcor() const
	{
		return cor;
	}
	string Moto::getmarca() const
	{
		return marca;
	}
	string Moto::getmodelo()
	{
		return modelo;
	}
	double Moto::getvalor()
	{
		return valor;
	}
	
	//setters
	void Moto::setmodelo(string novomodelo)
	{
		modelo = novomodelo;
	}
	
	void Moto::setvalor(double novovalor)
	{
		valor = novovalor;
	}
		
	double Moto::valortotalcompra(Seguro s) const
	{
		return (valor + (valor * taxa) + s.valorseguro);
	}
	
	//Impressão
	void Moto::mostra() const	
	{
		cout << "Cor: " << cor << endl;
		cout << "Marca: " << marca << endl;
		cout << "Modelo: " << modelo << endl;
		cout << "Valor: " << valor << endl;
	}

