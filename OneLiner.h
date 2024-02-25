
#ifndef M2_OEP_JBOOTHHO_KSCARPELLINO_ONELINER_H
#define M2_OEP_JBOOTHHO_KSCARPELLINO_ONELINER_H


#include "joke.h"
#include <string>
using namespace std;

class OneLiner : public Joke {
public:
    // Constructor
    OneLiner(std:: string punchline, std:: string context);

    // Getter for context
    std::string getContext() const;

    // Setter for context
    void setContext(const std::string& newContext);

    /*** TODO: input joke function that will read in the joke and add it to the jokebook ***/
    void inputJoke() override;

private:
    std::string context;         // Context of the joke (e.g., stand-up comedy, casual conversation)
};


#endif //M2_OEP_JBOOTHHO_KSCARPELLINO_ONELINER_H
