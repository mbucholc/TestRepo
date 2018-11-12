/*
* Warrior.cpp
*
* Version information v0.1
* Author: Dr. Shane Wilson
* Date: 11/10/2017
* Description: Header for the warrior class
* Copyright notice
*/

#include "Warrior.h"

Warrior::Warrior()
	: health_{ 0 }
{
	std::cout << "A warrior has been born!\n";
	std::cout << "via the default constructor\n\n";
}

Warrior::~Warrior()
{
}


Warrior::Warrior(std::string name, std::string characterType, int health, int level, Weapon weapon):
	name_{ name }, characterType_{ characterType }, level_{ level }, weapon_{ weapon } {

	std::cout << "A warrior has been born!\n\n";
}

void Warrior::SetName(std::string name) {
	name_ = name;
}
std::string Warrior::GetName() const {
	return name_;
}

void Warrior::SetCharacterType(std::string character) {
	characterType_ = character;
}
std::string Warrior::GetCharacterType() const {
	return characterType_;
}

void Warrior::SetHealth(int health) {
	health_ += health;
}
int Warrior::GetHealth() const {
	return health_;
}

void Warrior::SetLevel(int level) {
	level_ = level;
}
int Warrior::GetLevel() const {
	return level_;
}

