//
// Created by Kylie Scarpellino on 2/22/24.
//

#include "knockknock.h"

// Constructor definition
KnockKnockJoke::KnockKnockJoke(std::string setup, std::string punchline)
        : Joke("Knock Knock", setup, punchline) {}

// Override getType method to return the specific type
std::string KnockKnockJoke::getType() const {
    return "Knock Knock";
}
