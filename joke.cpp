//
// Created by Kylie Scarpellino on 2/22/24.
//

#include "joke.h"

// Constructor definition
Joke::Joke(std::string type, std::string punchline)
        : type(type), punchline(punchline) {}

// Getter method definitions
std::string Joke::getType() const {
    return type;
}

std::string Joke::getPunchline() const {
    return punchline;
}

void setPunchline(std::string new_punchline){
    this->punchline = new_punchline;
}

void setType(std::string new_type){
    this->type = new_type;
}

