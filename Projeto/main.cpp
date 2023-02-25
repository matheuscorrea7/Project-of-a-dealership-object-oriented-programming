#include<iostream>
#include<string>
using namespace std;
#include "Concessionaria.h"
#include "Carro.h"
#include "Moto.h"
#include "Seguro.h"
#include "Motor.h"

double aumentataxa(Concessionaria c) //Metodo Friend
{
	return (c.taxa)*2;
}

int main()
{
	
	{//Bloco limitador 1
		Motor motor("1.3");
		Carro carro1(2,"preto", "Fiat", "Uno 96", 12000, "Volta Redonda", 9.0, 0.1, "José");
		Carro const carro2(4,"Cinza", "Fiat", "Uno 2020", 100000, "Mendes", 7.0, 0.08, "Matheus");
		
		cout << ".....................#Carro#.....................\n" << endl;
		
		cout << ".............Vinculação Estática................" << endl;
		//Vinculação estática com objeto constante
		carro2.mostra();
		cout << "Motor: " << motor.gettipo() << endl;
		
		cout << "...........Vinculação Dinâmica..............." << endl;
		//Vinculação dinamica com objeto não constante
		Carro *v = 0; //para o objeto não constante
		v = &carro1;
		carro1.settaxa(aumentataxa(*v)); 
		v->mostra();
		cout << "Valor Total da compra: " << v->valortotalcompra(300) << endl;
		
		cout << "...........Destrutores..............." << endl;
	
	
	}//Fim do bloco 1
	
	cout << endl;
	
	{//Bloco limitador 2
		
		Motor motor("1.2");
		Moto moto1("preta", "Honda", "PCX", 23000, "Volta Redonda", 9.0, 0.1, "José");
		Moto const moto2("Branca", "Yamaha", "MT-09", 50000, "Mendes", 10.0, 0.12, "Matheus");
		
		cout << ".....................#Moto#.....................\n" << endl;
		
		cout << ".............Vinculação Estática................" << endl;
		//Vinculação estática com objeto constante
		moto2.mostra();
		cout << "Motor: " << motor.gettipo() << endl;
		
		cout << "...........Vinculação Dinâmica..............." << endl;
		//Vinculação dinamica com objeto não constante
		Moto *v = 0; //para o objeto não constante
		v = &moto1;
		moto1.settaxa(aumentataxa(*v));  
		v->mostra();
		cout << "Valor Total da compra: " << v->valortotalcompra(300) << endl;
		
		cout << "...........Destrutores..............." << endl;
	

	}//Fim bloco 2
	
	cout << endl;
	
	{//Bloco limitador 3
		
		Concessionaria *c = new Concessionaria("Volta Redonda", 10.0, 0.08, "José");
		Concessionaria const concessionaria2("Mendes", 10.0, 0.1, "Matheus");
		
		cout << ".....................#Concessionária#.....................\n" << endl;
		
		//cout << ".............Vinculação Estática................" << endl;
		//Vinculação estática com objeto constante
		//moto2.mostra();//Não funciona pois a uso o metodo virtual
		//concessionaria2.setvendedor("Vermelho");não funciona pois o objeto é constante
		
		cout << "\n...........Vinculação Dinâmica..............." << endl;
		//Vinculação dinamica com objeto não constante
		c->mostra(); //para o objeto não constante

		cout << "Valor Total da compra: " << c->valortotalcompra() << endl;
		
		cout << "...........Destrutores..............." << endl;
	
	
	}//Fim bloco 3

}
