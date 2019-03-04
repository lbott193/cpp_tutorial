
#include "glibber.h"
#include <iostream>

// Constructor



	glibber::glibber(std::string wort) : 
		inputword(wort) 
	{}

	glibber::glibber() :
		inputword("BennyIstDoof;)")
	{}


//Destructor

	glibber::~glibber() {}

std::string glibber::Play(const std::string& input) {
    std::string output ;
    
	u32 counter = 0;
	u32 counter2 = 0;
		

	for (auto c : input) { 
		output = output + c;
		counter++; 
		if (counter == 2) {
			if (counter2 < inputword.size()) {
				output = output + inputword[counter2];
				counter2++;

			}
				counter = 0;
			
		}

	 }
	



    return output;
}