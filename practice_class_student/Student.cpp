#include <iostream>
#include "Student.h"

void Student::showStudent() {
	cout << name << endl << birthdate.year << "." << birthdate.month << "." << birthdate.day << endl << phoneNumber << endl << city << endl << country << endl << education.name << ": " << education.city << ": " << education.country << endl;
}

string Student::getName() {
	return name;
}
birthDate Student::getBirthDate() {
	return birthdate;
}
string Student::getPhoneNumber() {
	return phoneNumber;
}
string Student::getCity() {
	return city;
}
string Student::getCountry() {
	return country;
}
Education Student::getEducation() {
	return education;
}

void Student::setName(string n) {
	name = n;
}
void Student::setBirthDate(int y, int m, int d) {
	birthdate.day = d;
	birthdate.month = m;
	birthdate.year = y;
}
void Student::setPhoneNumber(string n) {
	phoneNumber = n;
}
void Student::setCity(string c) {
	city = c;
}
void Student::setCountry(string c) {
	country = c;
}
void Student::setEducation(string n, string c, string coun) {
	education.name = n;
	education.city = c;
	education.country = coun;
}

