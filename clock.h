//CLASS PROVIDED: Clock
//
//CONSTRUCTOR for the Clock Class:
//	Clock()
//		Description: constructor will initialize a default Clock object 
//		Preconditions: none
//		Postconditions: Clock has been set to default Time
//
//	Clock(int a, int b)
//		Description: Constructor will initialize Clock objects
//		Preconditions: a < 24 && >= 0, b < 60 && >= 0
// 		Postconditions: Clock has been set to Valid Time
//
//MODIFICATION MEMBER FUNCTIONS for the Polynomial Class:
//
//
//
//
//
//
//FRIEND FUNCTIONS for the Polynomial Class:
//	friend std::istream& operator>>(std::istream& inp, Clock& c2);
//		Description: Overloaded the Input operator   
//		Preconditions: Input Checks for a valid Clock Object
//		Postconditions: Enters in Valid Data for Clock object		
//
//	friend std::ostream& operator<<(std::ostream& outp, const Clock& c2);
//		Description: Overloads the Output Operator  
//		Preconditions: none
//		Postconditions: Outputs Valid Data for Clock Object
//		
//	friend Clock operator>(Clock c1, const Clock& c2);
//		Description: Overloads the > operator
//		Preconditions: none
//		Postconditions: Compares left to right and sets a boolean flag = to answer 		
//		
//	friend Clock operator+(Clock c1, const Clock& c2);
//		Description: Overloads the + operator  
//		Preconditions: none
//		Postconditions: Adds right to left		
//

#include <string>
#include <iostream>
#include <cstdlib>

class Clock
{
	private:
		int a;
		int b;
		
	public: 
	//Constructor 
		Clock();
		Clock(int a, int b);
		
	//Modification Member Functions
	Clock addmin(Clock c1);
	
	
	//Friend Functions
	friend std::istream& operator>>(std::istream& inp, Clock& c2);	
	friend std::ostream& operator<<(std::ostream& outp, const Clock& c2);
	
	friend Clock operator>(Clock c1, const Clock& c2);
	friend Clock operator+(Clock c1, const Clock& c2);
} 
