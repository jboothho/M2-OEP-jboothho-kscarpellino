
#ifndef M2_OEP_JBOOTHHO_KSCARPELLINO_KNOCKKNOCK_H
#define M2_OEP_JBOOTHHO_KSCARPELLINO_KNOCKKNOCK_H


#include "joke.h" // Include the base class header file

class KnockKnock : public Joke {
public:
    // Constructor
    KnockKnock(std::string setup, std::string punchline);

    // Getter for setup
    std::string getSetup() const;

    // Setter for setup
    void setSetup(const std::string& newSetup);

    /*** TODO: input joke function that will read in the jokek ***/
    std::pair<string, string> inputJoke() override;

    /** TODO: writeJoke function that will add joke to the jokebook **/
    void writeJoke(std::vector<unique_ptr<Joke>> j) override;

private:
    string setup;
};


#endif
