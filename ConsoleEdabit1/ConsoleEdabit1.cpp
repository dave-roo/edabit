// ConsoleEdabit1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int convert(int minutes) {
	float seconds = 0.0;
	seconds = minutes / 60;
	return seconds;
};

int main()
{

	std::cout << convert(2);

}
