#include "Archer.h"



Archer::Archer() 
	: health_{ 0 }
{
	std::cout << "An Archer has been born!\n";
	std::cout << "via the default constructor\n\n";
}


Archer::~Archer()
{
}


Archer::Archer(std::string name, std::string characterType, int health, int level, Weapon weapon) :
	name_{ name }, characterType_{ characterType }, level_{ level }, weapon_{ weapon } {

	std::cout << "An Archer has been born!\n\n";
}

void Archer::SetName(std::string name) {
	name_ = name;
}
std::string Archer::GetName() const {
	return name_;
}

void Archer::SetCharacterType(std::string character) {
	characterType_ = character;
}
std::string Archer::GetCharacterType() const {
	return characterType_;
}

void Archer::SetHealth(int health) {
	health_ += health;
}
int Archer::GetHealth() const {
	return health_;
}

void Archer::SetLevel(int level) {
	level_ = level;
}
int Archer::GetLevel() const {
	return level_;
}