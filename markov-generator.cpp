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

const int  NUMBER_OF_SENTENCES_TO_CREATE = 5;
const char QUIT_CHARACTER = '3';

void printMainMenu() {
    std::cout << "1. Enter your own text\n";
    std::cout << "2. Enter text from file\n";
    std::cout << "\n";
    std::cout << "3. Quit\n";
}

char getUserChar() {
    std::string userChar;
    std::getline(std::cin, userChar);
    return userChar.at(0);
}

std::string getUserString() {
    std::string userString;
    std::getline(std::cin, userString);
    return userString;
}

void createMarkovSentences(std::string originalSentence, int numSentencesToCreate) {
    std::cout << "TODO: CREATE SENTENCES\n";
}

void markovGeneratorFile() {
    std::cout << "TODO: ENTER FILE TEXT\n";
}

void markovGeneratorUser() {
    std::string userSentence;
    
    std::cout << "Enter a sentence: ";
    userSentence = getUserString();
    createMarkovSentences(userSentence, NUMBER_OF_SENTENCES_TO_CREATE);
}

void mainMenu() {
    std::cout << "Fuzzabee's Markov Sentence Generator\n\n";
    printMainMenu();

    char menuSelection = '0';
    while (menuSelection != QUIT_CHARACTER) {
        std::cout << "Enter a number: ";
        menuSelection = getUserChar();
        switch (menuSelection) {
            case '1':
                markovGeneratorUser();
                printMainMenu();
                break;
            case '2':
                markovGeneratorFile();
                printMainMenu();
                break;
            case '3':
                return;
            default:
                std::cout << "Invalid command\n\n";
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc == 1) { mainMenu(); }
    if (argc == 2) { /* Open file in arg 2 and create sentences from that */}
    return 0;
}