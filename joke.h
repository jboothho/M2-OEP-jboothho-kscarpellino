//
// Created by Kylie Scarpellino on 2/22/24.
//

#ifndef M2_OEP_JBOOTHHO_KSCARPELLINO_JOKE_H
#define M2_OEP_JBOOTHHO_KSCARPELLINO_JOKE_H


#include <string>
#include <utility>
using namespace std;

class Joke {

public:
    //Default constructor
    Joke();

    // Constructor
    Joke(std::string type, std::string punchline);

    // Getters
    virtual std::string getType() const;
    virtual std::string getPunchline() const;

    //setters
    virtual void setType(string type);
    virtual void setPunchline(string punchline);

    /** function that will be overridden in each subclass to input that joke to the jokebook **/
    virtual void inputJoke() = 0;

protected:
    string type;      // Type of joke (e.g., Knock Knock, Pun, Riddle)
    string punchline; // Punchline or the humorous ending of the joke
};


#endif //M2_OEP_JBOOTHHO_KSCARPELLINO_JOKE_H
