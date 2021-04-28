//Johnathon Glatz, Justin Gunderson, Logan Kochka-Puskar
//CSC 265, Assignment 6

#include <iostream>
#include "clock.h"
#include <fstream>
#include <string>
#include <math.h>

int main()
{
	Clock c1, c2;											//Variables
	bool checker;
	
	std::cout << "Enter First Time: ";						//Inputs
	std::cin >> c1;
	std::cout << "Enter Second Time: ";
	std::cin >> c2;
	c1.addmin(c1);
	
	std::cout << "Clock 1 says: " << c1;					//Outputs
	std::cout << "Clock 2 says: " << c2;
	
	if (checker == true)											//Comparison results
	{
		std::cout << "Clock 1 is later than Clock 2";
	}
	else if (checker == false)
	{
		std::cout << "Clock 2 is later than Clock 1";
	}
	
	return 0;
}
