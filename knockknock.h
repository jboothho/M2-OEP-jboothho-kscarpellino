//
// Created by Kylie Scarpellino on 2/22/24.
//

#ifndef M2_OEP_JBOOTHHO_KSCARPELLINO_KNOCKKNOCK_H
#define M2_OEP_JBOOTHHO_KSCARPELLINO_KNOCKKNOCK_H


#include "joke.h" // Include the base class header file

class KnockKnockJoke : public Joke {
public:
    // Constructor
    KnockKnockJoke(std::string setup, std::string punchline);

    // Override getType method to return the specific type
    std::string getType() const;
};


#endif //M2_OEP_JBOOTHHO_KSCARPELLINO_KNOCKKNOCK_H
