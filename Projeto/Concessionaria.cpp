#include<iostream>
#include<string>
using namespace std;
#include "Concessionaria.h"

	//Construtor com inicializadores
	Concessionaria::Concessionaria(string cid, double nota, double tax, string const &nomevendedor): cidade(cid), notaatendimento(nota), taxa(tax), vendedor(nomevendedor) {}
	
	//Destrutor
	Concessionaria::~Concessionaria()
	{
		cout << "Concessionária Destruída" << endl;
	}
	
	//getters
	string Concessionaria::getcidade()
	{
		return cidade;
	}
	double Concessionaria::getnotaatendimento()
	{
		return notaatendimento;
	}
	double Concessionaria::gettaxa()
	{
		return taxa;
	}
	string Concessionaria::getvendedor() const
	{
		return vendedor;
	}
	
	//Setters
	void Concessionaria::setcidade(string novacidade)
	{
		cidade = novacidade;
	}
	void Concessionaria::setnotaatendimento(double novanotaatendimento)
	{
		notaatendimento = novanotaatendimento;
	}
	
	void Concessionaria::settaxa(double novataxa)
	{
		taxa = novataxa;
	}
	
	//Metodos virtuais
	double Concessionaria::valortotalcompra() const
	{
		return 0;
	}
	
	void Concessionaria::mostra()
	{
		cout << "Cidade: " << cidade << endl;
		cout << "Nota do atendimento: " << notaatendimento << endl;
		cout << "Taxa: " << taxa << endl;
		cout << "Vendedor: " << vendedor << endl;
	}
	
