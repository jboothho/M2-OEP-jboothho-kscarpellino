//
// Created by Julia Booth-Howe on 2/22/24.
//

#ifndef M2_OEP_JBOOTHHO_KSCARPELLINO_ONELINER_H
#define M2_OEP_JBOOTHHO_KSCARPELLINO_ONELINER_H


#include "joke.h"
#include <string>

class OneLiner : public Joke {
public:
    // Constructor
    OneLiner(std::string context, std::string punchline);

    // Getter for context
    std::string getContext() const;

    // Setter for context
    void setContext(const std::string& newContext);

private:
    std::string context;         // Context of the joke (e.g., stand-up comedy, casual conversation)
};


#endif //M2_OEP_JBOOTHHO_KSCARPELLINO_ONELINER_H
