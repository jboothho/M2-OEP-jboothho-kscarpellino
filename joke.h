
#ifndef M2_OEP_JBOOTHHO_KSCARPELLINO_JOKE_H
#define M2_OEP_JBOOTHHO_KSCARPELLINO_JOKE_H


#include <string>
#include <utility>
using namespace std;

class Joke {

public:
    //Default constructor
    Joke();

    //constructor that only takes type and leaves punchline open
    Joke(std:: string type);

    // Constructor
    Joke(std::string type, std::string punchline);


    // Getters
    virtual std::string getType() const;
    virtual std::string getPunchline() const;

    //setters
    virtual void setType(string type);
    virtual void setPunchline(string punchline);

    /** function that will be overridden in each subclass to input that joke to the jokebook **/
    virtual std::pair<string, string>inputJoke() = 0;
    virtual void writeJoke(std::vector<unique_ptr<Joke>> j);


protected:
    string type;      // Type of joke (e.g., Knock Knock, Pun, Riddle)
    string punchline; // Punchline or the humorous ending of the joke
};


#endif //M2_OEP_JBOOTHHO_KSCARPELLINO_JOKE_H
