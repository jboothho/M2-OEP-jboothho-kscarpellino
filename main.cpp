//
// Created by Kylie Scarpellino on 2/22/24.
//

#include <iostream>
#include "joke.h"
#include "knockknock.h"
#include "OneLiner.h"
#include <vector>
#include <memory>
#include <fstream>


std::string promptUser();
void oneLinerInput();
//void knockKnockInput();

int main() {
    std::string type_of_joke, punchline, context;
    vector<unique_ptr<OneLiner>> oneLiners;
    OneLiner o;

    // Vector to store one-liner jokes
    // Prompt user for joke type, setup, and punchline
    while (type_of_joke != "Quit"){
        type_of_joke = promptUser();

        // Check if the joke type is "One-Liner"
        if (type_of_joke == "One-Liner") {
            //then create the joke object and
            auto result = o.inputJoke();
            punchline = result.first;
            context = result.second;
            // but now maybe i send that to a new function
            oneLiners.push_back(make_unique<OneLiner>(punchline, context));
        }
    }
    writeJoke(oneLiners);

}

/** Okay something i'm thinking is that we should have a function declared
 *  in the superclass that must be overridden by each type that is an input
 *  function and puts it in the file
 *
 *   i made a function called inputJoke in Joke.h that won't be defined in the cpp
 *   but will be defined for each individual joke type
 */

/** okay so lets think through this **/
// im gonna have the first function return the two strings that will make the joke object
// then those two strings will go into a function
// so i shoudl put the function into oneliner?
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
    std::cout << "Enter the type of joke (e.g., One-Liner) or type 'quit' to stop: ";

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


