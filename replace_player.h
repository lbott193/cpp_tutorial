#include <string>

class ReplacePlayer {
public:
    // Constructor
    ReplacePlayer(char replace, char replaced_by);

    //Destructor
    ~ReplacePlayer();

    std::string Play(const std::string& input);

private:
    char replace;
    char replaced_by;
};