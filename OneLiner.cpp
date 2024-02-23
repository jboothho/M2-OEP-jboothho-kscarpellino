//
// Created by Julia Booth-Howe on 2/22/24.
//

#include "oneliner.h"

// Constructor definition
OneLiner::OneLiner(std::string context, std::string punchline)
        : Joke("One-Liner", punchline), context(context) {}

// Getter definition
std::string OneLiner::getContext() const {
    return context;
}

// Setter definition
void OneLiner::setContext(const std::string& newContext) {
    context = newContext;
}



