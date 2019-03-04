#include <string>
#include "common_types.h"

class glibber {
public:
    // Constructor
    glibber(std::string wort);
	glibber();
    //Destructor
    ~glibber();

    std::string Play(const std::string& input);

private:
    std::string inputword;

};