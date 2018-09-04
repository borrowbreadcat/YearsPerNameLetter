// 20180829 YearsPerNameLetter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

void intro()
{
	using namespace std;
	
	cout << "The main purpose for this program's existence is as fodder for me to practice coding in C++\n";
	cout << "This is a response to the section quiz at the end of 4.4b on learncpp.com\n";
	cout << "\tVERSION HISTORY\n";
	cout << "\tver 20180829.01: just getting started.\n\n";
	cout << "Write a program that asks the user to enter their full name and their age. As output, tell the user\n"; 
	cout << "how many years they’ve lived for each letter in their name(for simplicity, count spaces as a letter).\n\n";
}

int yearsPerNameLetter()
{
	using namespace std;
	cout << "Please type your full name.\n";
	string fullName{ "this is the default fullName" };
	getline(cin, fullName);
	cout << "How many years old are you?";
	int age{ 1 };
	cin >> age;
	cin.ignore(32767, '\n'); //this removes an extraneous \n from the cin queue, allowing future use of getline().
	float namelength{ static_cast<float>(fullName.length()) }; //generic .length() is an unsigned int. compiler had problems with implicit conversion
	cout << "Your full name has " << namelength << " characters in it, including spaces.\n";
	cout << "You have been alive for " << age / namelength << " years for each letter in your name. \n";
	cout << "I'm sure that information is exceedingly userful to you.\n";
	return 0;
}

int main()
{
	intro();
	yearsPerNameLetter();
    return 0;
}

