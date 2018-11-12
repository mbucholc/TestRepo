/*
* Main.cpp
*
* Version information v0.1
* Author: Dr. Shane Wilson
* Date: 11/10/2017
* Description: Driver to test the heartrate class
* Copyright notice
*/

#include <iostream>
#include "HeartRates.h"

using namespace std;

int main() {

	string firstName;
	string lastName;
	int month;
	int day;
	int year;

	// get user input
	cout << "Please enter first and last name: ";
	cin >> firstName >> lastName;
	cout << "Please enter month, day, and year of birth: ";
	cin >> month >> day >> year;

	// create a HeartRates object
	HeartRates heartRates{ firstName, lastName, month, day, year };

	// display user information
	cout << "First Name: " << heartRates.getFirstName() << "\n";
	cout << "Last Name: " << heartRates.getLastName() << "\n";
	cout << "Date of Birth: " << heartRates.getBirthMonth() << "/"
		<< heartRates.getBirthDay() << "/"
		<< heartRates.getBirthYear() << "\n";
	cout << "Age: " << heartRates.getAge() << "\n";
	cout << "Maximum Heart Rate: "
		<< heartRates.getMaximumHeartRate() << "\n";
	cout << "Target Heart Rate: "
		<< heartRates.getMinimumTargetHeartRate() << "-"
		<< heartRates.getMaximumTargetHeartRate() << "\n";

	return 0;
}