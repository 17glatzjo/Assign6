//Johnathon Glatz, Justin Gunderson, Logan Kochka-Puskar
//CSC 265, Assignment 6

#include <iostream>
#include "clock.h"
#include <fstream>
#include <string>
#include <math.h>

int main()
{
	Clock c1, c2;												//Variables
	bool checker;
	
	std::cout << "Enter First Time: ";							//Inputs
	if (std::cin >> c1)
	{
	
		std::cout << "\nYou have entered: " << c1 << "\n";
	}
	else
	{
		std::cout << "Invalid Time\n";
		std::cin.clear();
	}
	std::cout << "Enter Second Time: ";
	if (std::cin >> c2)
	{
		std::cout << "\nYou have entered: " << c2 << "\n";
	}
	else
	{
		std::cout << "Invalid Time \n";	
		std::cinclear();
	}
	
	c1.addmin(c1);
	
	std::cout << "Clock 1 says: " << c1;						//Outputs
	std::cout << "\nClock 2 says: " << c2;
	
	if (checker == true)										//Comparison results
	{
		std::cout << "\nClock 1 is later than Clock 2";
	}
	else if (checker == false)
	{
		std::cout << "\nClock 2 is later than Clock 1";
	}
	
	return 0;
}
