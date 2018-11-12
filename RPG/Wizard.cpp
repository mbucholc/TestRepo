/*
* Wizard.cpp
*
* Version information v0.1
* Author: Dr. Shane Wilson
* Date: 11/10/2017
* Description: Header for the Wizard class
* Copyright notice
*/

#include "Wizard.h"



Wizard::Wizard()
	: health_{ 0 }
{
	std::cout << "A Wizard has been born!\n";
	std::cout << "via the default constructor\n\n";
}

Wizard::~Wizard()
{
}

Wizard::Wizard(std::string name, std::string characterType, int health, int level, Weapon weapon) :
	name_{ name }, characterType_{ characterType }, level_{ level }, weapon_{ weapon } {

	std::cout << "A warrior has been born!\n\n";
}
void Wizard::SetName(std::string name) {
	name_ = name;
}
std::string Wizard::GetName() const {
	return name_;
}

void Wizard::SetCharacterType(std::string character) {
	characterType_ = character;
}
std::string Wizard::GetCharacterType() const {
	return characterType_;
}

void Wizard::SetHealth(int health) {
	health_ += health;
}
int Wizard::GetHealth() const {
	return health_;
}

void Wizard::SetLevel(int level) {
	level_ = level;
}
int Wizard::GetLevel() const {
	return level_;
}
