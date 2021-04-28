#include <string>
#include <iostream>
#include <stdlib.h>
#include "clock.h

static bool isTime(sonst std::string &s)
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

Clock addmin(Clock c1)															//Adds mins to Clock 1 making use of the + operator
{
	clock.b + 10;
	if (clock.b > 60)
	{
		clock.b - 60;	
		if (clock.a < 23){
			clock.a + 1;
		}
		else {
			clock.a = 0;
		}
	}
	return c1;	
}

friend std::istream& operator>>(std::istream &inp, Clock &clock)									//Overloads the input operator
{
	std::clockStr;
	inp >> clockStr;
	if (inp)															//Checks the inp to make sure its not failing
	{
		std::string::size_type colonPos;	
		colonPos = polyStr.find(":");												//Finds the first instance of ":". Used to find the end of aStr and beginning of bStr.
		if (colonPos == std::string::npos)
		{
			inp.setstate(std::ios_base::failbit);										//If there is no instance, then this is an invalid time
			return inp;
		}
		
		std::string aStr, bStr;
		aStr = polyStr.substr(0, colonPos);											//All characters preceding the ":" token
		bStr = polyStr.substr(colonPos+1);											//All characters after the ":" token
		
		if(isTime(aStr, true) && isTime(bStr, false))									
		{
			clock.a = atoi(aStr.c_str());
			clock.b = atoi(bStr.c_str());	
		}	
		else															//Set failbit to tell system that the last read from the input failed
		{
			inp.setstate(std::ios_base::failbit);
			return inp;
		}
	}	
	return inp;
}	

friend std::ostream& operator<<(std::ostream& outp, const Clock &clock)									//Overloads the Output Operator
{
	
	outp
		<< clock.a << ":"
		<< clock.b
	return outp;
	
}
	
friend Clock operator>(Clock c1, const Clock& c2)											//Overloads the > Operator
{
	boolean checker = false;
	if (c1 > c2)
	{
		checker = true;
	}
	else
	{
		return checker;
	}
	return checker;
}

friend Clock operator+(Clock c1, const Clock& c2)											//Overloads the + operator
{

}	
