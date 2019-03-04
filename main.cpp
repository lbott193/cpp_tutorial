#include <iostream>
#include "replace_player.h"

int main(int argc, char **argv) {
    std::string start_string("Drei Chinesen mit dem Kontrabass");

    ReplacePlayer player1('i','u');
    ReplacePlayer player2('a','b');
    std::string answer = player1.Play(start_string);
    answer = player2.Play(answer);

    std::cout << answer << std::endl;

    return 0;
}
