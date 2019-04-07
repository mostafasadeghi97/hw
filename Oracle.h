#ifndef ORACLE_H
#define ORACLE_H

#include<map>
#include<vector>
#include<fstream>
#include<iostream>
#include<random>
#include<string>
#include"Human.h"

//================= MOSTAFA SADEGHI   9423067 =============

// class Oracle;
// bool operator<(int,const Oracle&);
// std::ostream& operator<<(std::ostream& os, const Oracle Oracle);

class Oracle 
{
	
public: 
	// Oracle(int x, int y, int z);
	Oracle(std::string);
	// ~Oracle();
	// // Oracle(int x, int y);
	// Oracle(const Oracle&);
	// // Oracle(Oracle&&);
	// // Oracle& set_x(int);
	// // Oracle& set_y(int);
	// bool operator>(const Oracle&) const;
	// bool operator==(const Oracle&) const;
	// Oracle* operator+(Oracle&);
	// // Oracle& operator+=(const Oracle&);
	// // Oracle operator+(const Oracle&);
	// void operator++();
	// // Oracle operator++(int);
	// // Oracle& operator=(const Oracle&);
	// // Oracle& operator=(Oracle&& Oracle);
	// // int volume() const;
	// // int X, Y, Z;
	// // static inline int count{};
	bool marry(Human*, Human*);
	int getFamily(Human*);
	// bool isMotherOf(Oracle*);
	// bool isFatherOf(Oracle*);
	// std::string getFirstName();
	// std::string getLastName();
	// bool getGender();
	// int getEyeColor();
	// int getHairColor();
	// int getAge();
	// void show() const;
	// void printChildren() const;
	// Oracle* father;
	// Oracle* mother;
	// Oracle* spouse;
	// Oracle** children;
private:
	std::string Name;
	
}; 

#endif
