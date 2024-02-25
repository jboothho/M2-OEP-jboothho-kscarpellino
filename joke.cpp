
#include "joke.h"
using namespace std;


//default constructor
Joke::Joke(){
    type = "";
    punchline = "";
}

// Constructor definition
Joke::Joke(std::string type, std::string punchline)
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

