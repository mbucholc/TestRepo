/*
* HeartRates.h
*
* Version information v0.1
* Author: Dr. Shane Wilson
* Date: 11/10/2017
* Description: HeartRates class for computing target heart rates.
* Copyright notice
*/

#pragma once

#include <string>

class HeartRates
{
private:
	std::string firstName; // user's first name
	std::string lastName; // user's last name
	int birthMonth{ 0 }; // user's birth month
	int birthDay{ 0 }; // user's birth day
	int birthYear{ 0 }; // user's birth year
	int currentMonth{ 0 }; // current month
	int currentDay{ 0 }; // current day
	int currentYear{ 0 }; // current year
public:
	// Constructor
	HeartRates(std::string first, std::string last, int m, int d, int y)
		: firstName{ first }, lastName{ last }, birthMonth{ m },
		birthDay{ d }, birthYear{ y } {
	}

	// set first name
	void setFirstName(std::string first) {
		firstName = first;
	}

	// get first name
	std::string getFirstName() {
		return firstName;
	}

	// set last name
	void setLastName(std::string last) {
		lastName = last;
	}

	// get last name
	std::string getLastName() {
		return lastName;
	}

	// set birth month
	void setBirthMonth(int m) {
		birthMonth = m;
	}

	// get birth month
	int getBirthMonth() {
		return birthMonth;
	}

	// set birth day
	void setBirthDay(int d) {
		birthDay = d;
	}

	// get birth day
	int getBirthDay() {
		return birthDay;
	}

	// set birth year
	void setBirthYear(int y) {
		birthYear = y;
	}

	// get birth year
	int getBirthYear() {
		return birthYear;
	}

	// calculate age
	int getAge() {
		// if current date has not yet been set, get it from user
		if (0 == currentYear) {
			std::cout << "Please enter today's month, day, and year: ";
			std::cin >> currentMonth >> currentDay >> currentYear;
		}

		if (currentMonth < birthMonth) {
			return currentYear - birthYear - 1;
		}
		else if (currentMonth == birthMonth) {
			if (currentDay < birthDay) {
				return currentYear - birthYear - 1;
			}
		}

		return currentYear - birthYear;
	}

	// get maximum heart rate
	int getMaximumHeartRate() {
		return 220 - getAge();
	}

	// calculate minimum target heart rate
	int getMinimumTargetHeartRate() {
		return 50 * getMaximumHeartRate() / 100;
	}

	// calculate maximum target heart rate
	int getMaximumTargetHeartRate() {
		return 85 * getMaximumHeartRate() / 100;
	}

};

