#include <string>

class ReplacePlayerL {
public:
    // Constructor
    ReplacePlayerL();

    //Destructor
    ~ReplacePlayerL();

    std::string Play(const std::string& input);

private:
    std::string replace;
};