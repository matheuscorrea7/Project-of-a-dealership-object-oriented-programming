#include<iostream>
#include<string>
using namespace std;
#include "Seguro.h"
#include "Carro.h"
#include "Moto.h"


Seguro::Seguro(double vseguro): valorseguro(vseguro){}

Seguro::~Seguro()
{
	cout <<"Seguro destruido" <<endl;
}

void Seguro::setvalorseguro(double novovalorseguro) {valorseguro = novovalorseguro;}
