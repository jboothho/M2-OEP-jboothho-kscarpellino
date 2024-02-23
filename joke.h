//
// Created by Kylie Scarpellino on 2/22/24.
//

#ifndef M2_OEP_JBOOTHHO_KSCARPELLINO_JOKE_H
#define M2_OEP_JBOOTHHO_KSCARPELLINO_JOKE_H


#include <string>
#include <utility>

class Joke {

public:
    // Constructor
    Joke(std::string type, std::string punchline);

    // Getters and setters methods
protected:
    std::string getType() const{
    }
    std::string getPunchline() const{
    }
    void setType(std::string new_type){
    }
    void setPunchline(std::string new_punchline){
    }

private:
    std::string type;      // Type of joke (e.g., Knock Knock, Pun, Riddle)
    std::string punchline; // Punchline or the humorous ending of the joke
};


#endif //M2_OEP_JBOOTHHO_KSCARPELLINO_JOKE_H
