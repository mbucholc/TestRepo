/*
* Main.cpp
*
* Version information v0.1
* Author: Dr. Shane Wilson
* Date: 11/10/2017
* Description: Driver to test the RPG classes
* Copyright notice
*/

#include <iostream>
#include <random>
#include "Warrior.h"
#include "Archer.h"
#include "Wizard.h"




using namespace std;
int Fight(Warrior w, Wizard wiz);
float GenerateRandomNumber();

int main() {
	Warrior paul;
	Archer terri;
	Wizard jane;

	paul.SetHealth(100);
	terri.SetHealth(100);
	jane.SetHealth(100);


	int result = Fight(paul, jane);
	if (result == 1) {
		cout << "The Warrior won the fight" << endl;
		jane.SetHealth(-20);
	}
	else {
		cout << "The Wizard won the fight" << endl;
		paul.SetHealth(-20);
	}
	
	
	return 0;
}


int Fight(Warrior w, Wizard wiz) {
	float num = GenerateRandomNumber();
	if (num < 0.5) {
		//wiz.SetHealth(-20);
		//cout << "The Warrior won the fight" << endl;
		return 1;
	}
	else{ 
		//w.SetHealth(-20);
		//cout << "The Wizard won the fight" << endl;
		return 2;
	}

}

float GenerateRandomNumber() {

	/* Some of you asked how this works. You really need to read the documentation for the deep dive explanation.
	* If you want to know what is happening here I have added some comments
	* This will become clearer when we talk about classes and objects in week 3
	*/


	//Taken from: http://en.cppreference.com/w/cpp/numeric/random/uniform_real_distribution
	//Define an instance (aka an object) of the random_device Class and call the object rd
	std::random_device rd; //The random number device. Will be used to obtain a seed for the random number engine
						   //Call the constructor of the object rd and use the RD engine to create a mersenne_twister_engine
						   //The mersenne_twister_engine is based on the Mersenne twister algorithm
	std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
							//Create a new distribution object with min and max values. So the range the random number should fall between
	std::uniform_real_distribution<> dis(0, 1);

	//Generate the randome number passing in the mersenne_twister_engine generator
	float outcome = dis(gen);
	std::cout << " outcome " << outcome;

	return outcome;
}