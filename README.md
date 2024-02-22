# M2-OEP-jboothho-kscarpellino
open ended project for module 2 of cs 2300

# Jokebook Program

## Authors
Kylie Scarpellino and Julia Booth-Howe

## Summary
The Jokebook program is a C++ application designed to allow users to store and manage their favorite jokes in their own personal jokebook. Users can add jokes to their collection along with the type of joke (Knock Knock, Pun, Riddle, Dad joke, One liner)
- User input validation: Implemented to ensure proper handling of user inputs and prevent errors during joke management.
- Inheritance class relationship: Demonstrated through the creation of additional joke types inheriting from the base `Joke` class, such as `DadJoke` and `OneLinerJoke`.
- Composition class relationship: Illustrated by the `JokeCollection` class, which contains a vector of `Joke` objects, allowing for the management of a collection of jokes.

## Known Bugs
At the time of submission, there are no known bugs in the program.

## Future Work
With more time, the Jokebook program could be expanded in several ways:
- Implementing additional features such as joke categorization, search functionality, and the ability to rate jokes.
- Enhancing the user interface with graphical elements for a more visually appealing experience.
- Adding authentication and user account management to allow multiple users to store their jokes securely.
- Adding a joke generator that allows the user to request a new joke of a certain category.

## Citations


## Grade Expectation
Based on the grading rubric provided:
- Main Program Complexity and Usability: Great (40 pts) - The program uses many concepts from Module 2, is interactive with all user input validated correctly, and provides a practical solution for managing joke collections.
- Testing Program: Great (20 pts) - A robust testing program is implemented with multiple test cases for each nontrivial class method.
- Concepts: Is-A or Has-A Class Relationship x 6: Good (5 pts each) - Both inheritance and composition class relationships are demonstrated effectively in the program.
- Concepts: File Input or File Output: Good (10 pts) - File I/O is designed well, implemented robustly, and used sensibly in the main program.
- Style and Documentation: Robust comments and documentation, clearly organized.

