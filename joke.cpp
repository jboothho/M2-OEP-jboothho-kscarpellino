//
// Created by Kylie Scarpellino on 2/22/24.
//

#include <string>

class Joke {
public:
    // Constructor
    Joke(std::string type, std::string setup, std::string punchline)
            : type(type), setup(setup), punchline(punchline) {}

    // Getter methods
    std::string getType() const { return type; }
    std::string getSetup() const { return setup; }
    std::string getPunchline() const { return punchline; }

private:
    std::string type;      // Type of joke (e.g., Knock Knock, Pun, Riddle)
    std::string setup;     // Setup or lead-in of the joke
    std::string punchline; // Punchline or the humorous ending of the joke
};

