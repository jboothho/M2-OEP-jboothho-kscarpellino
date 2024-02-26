
#include "knockknock.h"

// Constructor definition
KnockKnock::KnockKnock(std::string punchline)
        : Joke("Knock Knock", punchline) {}


// Getter for context
std::string getSetup() const;

// Setter for context
void setSetup(const std::string& newSetup);

/*** TODO: input joke function that will read in the jokek ***/
std::pair<string, string> inputJoke() override;

/** TODO: writeJoke function that will add joke to the jokebook **/
void writeJoke(std::vector<unique_ptr<Joke>> j) override;
