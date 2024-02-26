
#ifndef M2_OEP_JBOOTHHO_KSCARPELLINO_ONELINER_H
#define M2_OEP_JBOOTHHO_KSCARPELLINO_ONELINER_H


#include "joke.h"
#include <string>
using namespace std;

class OneLiner : public Joke {
public:
    //Default constructor
    OneLiner();

    // Constructor
    OneLiner(std:: string punchline, std:: string context);

    // Getter for context
    std::string getContext() const;

    // Setter for context
    void setContext(const std::string& newContext);

    /*** TODO: input joke function that will read in the jokek ***/
    std::pair<string, string> inputJoke() override;

    /** TODO: writeJoke function that will add joke to the jokebook **/
    void writeJoke(std::vector<OneLiner> OneLiners) override;

private:
    std::string context;         // Context of the joke (e.g., stand-up comedy, casual conversation)
};


#endif //M2_OEP_JBOOTHHO_KSCARPELLINO_ONELINER_H
