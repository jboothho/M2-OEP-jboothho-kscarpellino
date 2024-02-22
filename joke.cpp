//
// Created by Kylie Scarpellino on 2/22/24.
//

#include "joke.h"

// Constructor definition
Joke::Joke(std::string type, std::string setup, std::string punchline)
        : type(type), setup(setup), punchline(punchline) {}

// Getter method definitions
std::string Joke::getType() const {
    return type;
}

std::string Joke::getSetup() const {
    return setup;
}

std::string Joke::getPunchline() const {
    return punchline;
}


