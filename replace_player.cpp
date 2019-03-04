#include <algorithm>
#include "replace_player.h"

// Constructor
ReplacePlayer::ReplacePlayer(char replace, char replaced_by) : replace(replace), replaced_by(replaced_by) {}

//Destructor
ReplacePlayer::~ReplacePlayer() {}

std::string ReplacePlayer::Play(const std::string& input) {
    std::string output = input;
    std::replace(output.begin(), output.end(), replace, replaced_by);
    return output;
}