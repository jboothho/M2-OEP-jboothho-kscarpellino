//
// Created by Kylie Scarpellino on 2/22/24.
//

#ifndef M2_OEP_JBOOTHHO_KSCARPELLINO_JOKE_H
#define M2_OEP_JBOOTHHO_KSCARPELLINO_JOKE_H


#include <string>

class Joke {
public:
    // Constructor
    Joke(std::string type, std::string setup, std::string punchline);

    // Getter methods
    std::string getType() const;
    std::string getSetup() const;
    std::string getPunchline() const;

public:
    std::string type;      // Type of joke (e.g., Knock Knock, Pun, Riddle)
    std::string setup;     // Setup or lead-in of the joke
    std::string punchline; // Punchline or the humorous ending of the joke
};


#endif //M2_OEP_JBOOTHHO_KSCARPELLINO_JOKE_H
