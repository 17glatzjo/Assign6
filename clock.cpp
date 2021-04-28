#include <string>
#include <iostream>
#include <stdlib.h>
#include "clock.h"

static bool isTime(const std::string &s, const bool )
{
	std::string::size_type digitStart = 0;
	if(s.substr(digitStart).find_first_not_of("1234567890") == std::string::npos)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

Clock::Clock() : a(0), b(0)
{
}

Clock::Clock(int a, int b) : a(0), b(0)
{
}

addmin(const Clock& c1)																	//Adds mins to Clock 1 making use of the + operator
{
	if (c1.b > 60)
	{
		c1.b - 60;	
		if (c1.a < 23){
			c1.a + 1;
		}
		else {
			c1.a = 0;
		}
	}
	return c1;	
}

std::istream& operator>>(std::istream &inp, Clock &clock)
{
	std::string clockStr;
	inp >> clockStr;
	if (inp)																			//Checks the inp to make sure its not failing
	{
		std::string::size_type colonPos;	
		colonPos = clockStr.find(":");													//Finds the first instance of ":". Used to find the end of aStr and beginning of bStr.
		if (colonPos == std::string::npos)												
		{																				
			inp.setstate(std::ios_base::failbit);										//If there is no instance, then this is an invalid time
			return inp;																	
		}																				
																						
		std::string aStr, bStr;															
		aStr = clockStr.substr(0, colonPos);												//All characters preceding the ":" token
		bStr = clockStr.substr(colonPos+1);												//All characters after the ":" token
																						
		if(isTime(aStr, true) && isTime(bStr, false))									
		{																				
			clock.a = atoi(aStr.c_str());												
			clock.b = atoi(bStr.c_str());												
		}																				
		else																			//Set failbit to tell system that the last read from the input failed
		{																				
			inp.setstate(std::ios_base::failbit);										
			return inp;																	
		}																				
	}																					
	return inp;																			
}																						
																						
std::ostream& operator<<(std::ostream& outp, const Clock &clock)					
{																						
																						
	outp																				
		<< clock.a << ":"																
		<< clock.b;																		
	return outp;																		
																						
}																						
	
Clock operator>(Clock c1, const Clock& c2)										//Overloads the ">" operator
{
	boolean checker = false;
	if (c1.a > c2.a)
	{
		checker = true;
	}
	else if (c1.a == c2.a && c1.b > c2.b)
	{
		checker = true;
	}
	return checker;
}

Clock operator+(const Clock& c1)													//Overloads the "+" operator
{
	c1.b + 10;
	return *this;
}	
