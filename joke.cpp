
#include "joke.h"
using namespace std;

// Constructor definition
Joke::Joke(string type, string punchline)
        : type(type), punchline(punchline) {}

// Getter method definitions
string Joke::getType() const {
    return type;
}

string Joke::getPunchline() const {
    return punchline;
}

void Joke::setPunchline(string punchline) {
    this -> punchline = punchline;
}

void Joke::setType(string type) {
    this -> type = type;
}

