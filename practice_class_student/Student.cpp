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

//  Student::Student() {
//	name = "qqqqq";
//	fullname = new char[1];
//	birthdate.day = 1;
//	birthdate.month = 1;
//	birthdate.year = 1111;
//	phoneNumber = "1111111";
//	city = "qqqqqq";
//	country = "qqqqq";
//	education.city = "qqqqq";
//	education.country = "qqqqqq";
//	education.name = "qqqqqq";
//}

// Student::Student(char* fn, int byear, int bmonth, int bday, string phn, string cty, string cntry, string ename, string ecity, string ecountry) {
//	fullname = new char[strlen(fn) + 1];
//	strcpy_s(fullname, strlen(fn) + 1, fn);
//	birthdate.day = bday;
//	birthdate.month = bmonth;
//	birthdate.year = byear;
//	phoneNumber = phn;
//	city = cty;
//	country = cntry;
//	education.name = ename;
//	education.country = ecountry;
//	education.city = ecity;
//}

Student::Student(string nme, string cty, string cntry) {
	fullname = new char[1];
	name = nme;
	city = cty;
	country = cntry;
}

Student::~Student() {
	delete[]fullname;
}

