/*
* Archer.h
*
* Version information v0.1
* Author: Dr. Shane Wilson
* Date: 11/10/2017
* Description: Header for the archer class
* Copyright notice
*/

#pragma once

#include <iostream>
#include <string>
#include "Weapon.h"

class Archer
{
private:
	std::string name_;
	std::string characterType_;
	int health_;
	int level_;
	Weapon weapon_;
public:

	Archer();
	Archer(std::string name, std::string characterType, int health, int level, Weapon weapon);
	~Archer();

	void SetName(std::string name);
	std::string GetName() const;

	void SetCharacterType(std::string character);
	std::string GetCharacterType() const;

	void SetHealth(int health);
	int GetHealth() const;

	void SetLevel(int level);
	int GetLevel() const;
};

