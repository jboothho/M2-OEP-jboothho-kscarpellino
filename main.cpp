//
// Created by Kylie Scarpellino on 2/22/24.
//

#include <iostream>
#include "joke.h"
#include "knockknock.h"
#include "OneLiner.h"
#include <vector>
#include <fstream>


std::string promptUser();
void oneLinerInput();
//void knockKnockInput();

int main() {
    std::string type_of_joke, punchline;
    std::vector<OneLiner> OneLiners;

    // Vector to store one-liner jokes
    // Prompt user for joke type, setup, and punchline
    type_of_joke= promptUser();

    // Check if the joke type is "One-Liner"
    if (type_of_joke == "One-Liner") {
        //then create the joke object and
        inputJoke();
    }
}

/** Okay something i'm thinking is that we should have a function declared
 *  in the superclass that must be overridden by each type that is an input
 *  function and puts it in the file
 *
 *   i made a function called inputJoke in Joke.h that won't be defined in the cpp
 *   but will be defined for each individual joke type
 */

/*void oneLinerInput(){
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


 ///**** OKAY HERE SPLIT ****/
   /* std::ofstream outFile("one-liners.txt");
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
}*/

std::string promptUser() {
    std::string type;
    std::cout << "Enter the type of joke (e.g., One-Liner): ";

    while (true) {
        std::getline(std::cin, type);

        if (type == "One-Liner" || type == "Knock-Knock" /* add more valid types */) {
            break;
        } else {
            std::cout << "Invalid input. Please enter a valid joke type: ";
        }
    }
    return type;
}


