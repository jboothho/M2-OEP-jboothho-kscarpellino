//
// Created by Kylie Scarpellino on 2/22/24.
//

#include "knockknock.h"

// Constructor definition
KnockKnock::KnockKnock(std::string setup, std::string punchline)
        : Joke("Knock Knock", setup, punchline) {}

// Override getType method to return the specific type
std::string KnockKnock::getType() const {
    return "Knock Knock";
}