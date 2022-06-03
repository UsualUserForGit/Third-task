#pragma once
#include <ctime>
#include <iostream>
#include <string>


class ThirdClass
{
public:
	ThirdClass();


	bool commandIsValid(std::string);

	std::string command[3];


	~ThirdClass();
private:
	bool hasValidChars(std::string);


};

