//
// Created by Kylie Scarpellino on 2/22/24.
//

#include <iostream>
#include "joke.h"

int main() {
    std::string type, setup, punchline;

    // Prompt user for joke type, setup, and punchline
    std::cout << "Enter the type of joke (e.g., Knock Knock): ";
    std::getline(std::cin, type);
    std::cout << "Enter the setup of the joke: ";
    std::getline(std::cin, setup);
    std::cout << "Enter the punchline of the joke: ";
    std::getline(std::cin, punchline);

    // Create a Joke object with the provided details
    Joke joke(type, setup, punchline);

    // Do something with the joke object, such as printing its details
    std::cout << "Here's the joke you entered:" << std::endl;
    std::cout << "Type: " << joke.type << std::endl;
    std::cout << "Setup: " << joke.setup << std::endl;
    std::cout << "Punchline: " << joke.punchline << std::endl;

    // Return 0 to indicate successful execution
    return 0;
}
