#ifndef HUMAN_H
#define HUMAN_H


#include<map>
#include<vector>
#include<fstream>
#include<iostream>
#include<random>
#include<string>

//================= MOSTAFA SADEGHI   9423067 =============

// class Human;
// bool operator<(int,const human&);
// std::ostream& operator<<(std::ostream& os, const Human human);

class Human 
{
	
public: 
	// Human(int x, int y, int z);
	Human(std::string, std::string, int, int, int, bool, int);
	~Human();
	// Human(int x, int y);
	Human(const Human&);
	// Human(Human&&);
	// Human& set_x(int);
	// Human& set_y(int);
	bool operator>(const Human&) const;
	bool operator==(const Human&) const;
	Human* operator+(Human&);
	// Human& operator+=(const human&);
	// Human operator+(const human&);
	void operator++();
	// Human operator++(int);
	// Human& operator=(const human&);
	// Human& operator=(Human&& human);
	// int volume() const;
	// int X, Y, Z;
	// static inline int count{};
	bool isChildOf(const Human*);
	bool isMotherOf(Human*);
	bool isFatherOf(Human*);
	std::string getFirstName();
	std::string getLastName();
	bool getGender();
	int getEyeColor();
	int getHairColor();
	int getNumberOfChildren();
	int getAge();
	void show() const;
	void printChildren() const;
	Human* father;
	Human* mother;
	Human* spouse;
	Human** children;
private:
	std::string firstName, lastName;
	int hairColor, eyeColor, age, numberOfChildren;
	bool gender;
	
}; 


#endif
