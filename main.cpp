//
// Created by Kylie Scarpellino on 2/22/24.
//

#include <iostream>
#include "joke.h"
#include "OneLiner.h"
#include <vector>
#include <fstream>

int main() {
    std::string type, punchline;
    // Vector to store one-liner jokes
    std::vector<OneLiner> OneLiners;
    // Prompt user for joke type, setup, and punchline
    std::cout << "Enter the type of joke (e.g., One-Liner): ";
    std::getline(std::cin, type);

    // Create a Joke object with the provided details
    // Check if the joke type is "One-Liner"
    if (type == "One-Liner") {
        std::string context;
        //ask for rest of joke info based on joke type
        std::cout << "Enter the punchline of the joke: ";
        std::getline(std::cin, punchline);
        std::cout << "Enter the context of the joke: ";
        std::getline(std::cin, context);


        // If it's a One-Liner joke, create a OneLiner object
        OneLiner joke(context, punchline);
        OneLiners.push_back(joke);

        std::cout << "One-liner joke added successfully!" << std::endl;

    }

    else {
        std::cout << "Unsupported joke type!" << std::endl;
    }

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
