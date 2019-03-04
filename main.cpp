#include <iostream>
#include "replace_player.h"
#include "glibber.h"
#include "replace_player_lukas.h"

int main(int argc, char **argv) {

    std::string start_string("Drei Chinesen mit dem Kontrabass");

	std::string mittelteil("--- wird auf magische Weise zu ---");
	glibber machschon;
    std::string answer = machschon.Play(start_string);
	ReplacePlayerL player1;
	std::string answer = player1.Play(answer);

	std::cout << start_string << std::endl;
	std::cout << mittelteil << std::endl;
	std::cout << answer << std::endl;

    return 0;
}
