/* 
*  TODO:
*  - Allow user to enter a file as an argument
*  - Allow user to enter as many files as they want as arguments
*  - Skip elegantly if file doesn't exist
*  - Implement settings (default implementation ignores punctuation and case sensitivity)
*    - Case sensitivity
*    - Punctuation
*    - Max number of words per result
*    - Number of sentences generated
*/

#include <iostream>
#include <limits>
#include <string>

const int  NUMBER_OF_SENTENCES = 5;
const char QUIT_CHARACTER = '3';

void printMainMenu() {
    std::cout << "1. Enter your own text\n";
    std::cout << "2. Enter text from file\n";
    std::cout << "\n";
    std::cout << "3. Quit";
}

char getMenuSelection() {
    std::string menuSelection;
    std::cout << "Enter a number: ";
    std::cin >> menuSelection;
    return menuSelection.at(0);
}

void mainMenu() {
    std::cout << "Fuzzabee's Markov Sentence Generator\n\n";

    char menuSelection = '0';
    while (menuSelection != QUIT_CHARACTER) {
        menuSelection = getMenuSelection();
        switch (menuSelection) {
            case '1':
                std::cout << "TODO: ENTER OWN TEXT\n";
                break;
            case '2':
                std::cout << "TODO: ENTER FILE TEXT\n";
                break;
            case '3':
                return;
            default:
                std::cout << "Invalid command\n";
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc == 1) { mainMenu(); }
    if (argc == 2) { /* Open file in arg 2 and create sentences from that */}
    return 0;
}