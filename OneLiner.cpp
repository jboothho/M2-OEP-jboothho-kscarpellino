//
// Created by Julia Booth-Howe on 2/22/24.
//

#include "OneLiner.h"

// Constructor definition
OneLiner::OneLiner(string context, string punchline)
        : Joke("One-Liner", punchline), context(context) {}

// Getter definition
std::string OneLiner::getContext() const {
    return context;
}

// Setter definition
void OneLiner::setContext(const std::string& newContext) {
    context = newContext;
}



