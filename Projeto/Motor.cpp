#include<iostream>
#include<string>
using namespace std;
#include "Motor.h"

		
		Motor::Motor(string tipomotor)
		{
			settipo(tipomotor);//Sem inicializador no construtor
		}
		
		Motor::~Motor()
		{
			cout << "Motor destruido" << endl;
		}
		
		//getters
		string Motor::gettipo()
		{
			return tipo;
		}	
		
		//setters
		void Motor::settipo(string novotipomotor)
		{
			tipo = novotipomotor;
		}
		
