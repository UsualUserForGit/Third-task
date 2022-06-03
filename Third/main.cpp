#include "ThirdClass.h"

#include <iostream>
#include <ctime>


int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	ThirdClass object;

	int inputData[] = { 10 * (-9 + rand() % 19) , 10 * (-9 + rand() % 19) , 10 * (-9 + rand() % 19) };

	std::cout << inputData[0] << " " << inputData[1] << " " << inputData[2] << std::endl << std::endl;

	for (int i = 0; i < 3; ++i)
	{
		std::cout << object.command[i] << std::endl;
		if (object.commandIsValid(object.command[i]))
		{
			int firstSemicolonPos = object.command[i].find(';');
			int secondSemicolonPos = object.command[i].substr(int(firstSemicolonPos + 1), object.command[i].length() - firstSemicolonPos ).find(';') + 1;
			int thirdSemicolonPos = object.command[i].substr(int(firstSemicolonPos + secondSemicolonPos + 1), object.command[i].length() ).find(';') + 1;


			inputData[0] += stoi(object.command[i].substr(1, 3));
			inputData[1] += stoi(object.command[i].substr(firstSemicolonPos + 2, 3));
			inputData[2] += stoi(object.command[i].substr(firstSemicolonPos + secondSemicolonPos + 2, 3));
		}
		else
		{
			std::cout << "ERROR SCRIPT" << std::endl;
			break;
		}
	}

	std::cout << std::endl << std::endl << inputData[0] << " " << inputData[1] << " " << inputData[2] << std::endl;


	// Random dec - 10 * (-9 + rand() % 19)


	

	return 0;
}