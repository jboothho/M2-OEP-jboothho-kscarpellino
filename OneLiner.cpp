//
// Created by Julia Booth-Howe on 2/22/24.
//

#include "OneLiner.h"
#include <iostream>
#include <vector>
#include <fstream>

// Constructor definition
OneLiner::OneLiner(std::string punchline, std::string context)
         : Joke("One-Liner", punchline), context(context){}

// Getter definition
std::string OneLiner::getContext() const {
    return context;
}

// Setter definition
void OneLiner::setContext(const std::string& newContext) {
    context = newContext;
}

/** TODO: implement inputJoke function in OneLiner **/
void OneLiner::inputJoke() {
    std::vector<OneLiner> OneLiners;
    std::string context, type, punchline;
    //ask for rest of joke info based on joke type
    std::cout << "Enter the punchline of the joke: ";
    std::getline(std::cin, punchline);
    std::cout << "Enter the context of the joke: ";
    std::getline(std::cin, context);


    // If it's a One-Liner joke, create a OneLiner object
    OneLiner joke(context, punchline);
    OneLiners.push_back(joke);

    std::cout << "One-liner joke added successfully!" << std::endl;

    std::ofstream outFile("one-liners.txt");
    if (outFile.is_open()) {
        // Write heading
        outFile << "=== One-Liners ===" << std::endl;

        // Write one-liners
        for (const auto& joke : OneLiners) {
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




