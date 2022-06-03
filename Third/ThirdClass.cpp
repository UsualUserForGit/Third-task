#include "ThirdClass.h"

#include <algorithm>


ThirdClass::ThirdClass() : command{ 'X' + std::to_string(10 * (-9 + rand() % 19)) +
	";Y" + std::to_string(10 * (-9 + rand() % 19)) + ";Z" + std::to_string(10 * (-9 + rand() % 19)) + ';','X' + std::to_string(10 * (-9 + rand() % 19)) +
	";Y" + std::to_string(10 * (-9 + rand() % 19)) + ";Z" + std::to_string(10 * (-9 + rand() % 19)) + ';','X' + std::to_string(10 * (-9 + rand() % 19)) +
	";Y" + std::to_string(10 * (-9 + rand() % 19)) + ";Z" + std::to_string(10 * (-9 + rand() % 19)) + ";" }
{

}

bool ThirdClass::commandIsValid(std::string command)
{
	if (this->hasValidChars(command))
	{
		return true;
	}
	return false;
}


ThirdClass::~ThirdClass()
{

}

bool ThirdClass::hasValidChars(std::string str)
{
	return str.find_first_not_of("XYZ1234567890;-") == std::string::npos;
}

