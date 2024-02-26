//
// Created by Julia Booth-Howe on 2/22/24.
//

#include "OneLiner.h"
#include <iostream>
#include <utility>
#include <vector>
#include <fstream>

//Default constructor
OneLiner::OneLiner(){
    this ->punchline = "";
    this -> context = "";
}
// Constructor definition
OneLiner::OneLiner(std::string punchline, std::string context)
         : Joke("One-Liner", std::move(punchline)), context(context){};


// Getter definition
std::string OneLiner::getContext() const {
    return context;
}

// Setter definition
void OneLiner::setContext(const std::string& newContext) {
    context = newContext;
}

/** TODO: implement inputJoke function in OneLiner **/
std::pair<string, string> OneLiner::inputJoke() {
    std::string context, punchline;
    //ask for rest of joke info based on joke type
    std::cout << "Enter the punchline of the joke: ";
    std::getline(std::cin, punchline);
    std::cout << "Enter the context of the joke: ";
    std::getline(std::cin, context);
    return std::make_pair(punchline, context);
}

    void writeJoke(std::vector<OneLiner> OneLiners) {
        std::ofstream outFile("one-liners.txt");
        if (outFile.is_open()) {
            // Write heading
            outFile << "=== One-Liners ===" << std::endl;

            // Write one-liners
            for (const auto &joke: OneLiners) {
                outFile << "Context: " << joke.getContext() << std::endl;
                outFile << "Punchline: " << joke.getPunchline() << std::endl;
                outFile << std::endl; // Separate each one-liner
            }

            std::cout << "One-liners saved to JokeBook.txt" << std::endl;
            outFile.close();
        } else {
            std::cerr << "Unable to open file for writing!" << std::endl;
        }
    }


