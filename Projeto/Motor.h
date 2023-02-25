#ifndef Motor_H
#define Motor_H
#include<iostream>
#include<string>
class Motor
{ 
	private:
		string tipo;
	public:
		
		Motor(string);
		~Motor();
		
		//getters
		string gettipo();
		
		//setters
		void settipo(string);
		
		
		
};
#endif
