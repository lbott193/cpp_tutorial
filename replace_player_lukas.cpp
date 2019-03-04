#include <vector>
#include <sstream>
#include <iterator>
#include "replace_player_lukas.h"

// Constructor
ReplacePlayerL::ReplacePlayerL() {}

//Destructor
ReplacePlayerL::~ReplacePlayerL() {}

std::string ReplacePlayerL::Play(const std::string& input) {
	std::istringstream iss(input);
	std::vector<std::string> results(std::istream_iterator<std::string>{iss},
		std::istream_iterator<std::string>());
	int counter = 0;
	std::string output;
	for (auto word : results) {
		if (counter % 2 == 0)
			output += word + ' ';
		counter++;
	}
	return output;
}