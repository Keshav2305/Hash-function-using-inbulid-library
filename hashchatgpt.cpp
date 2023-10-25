#include <iostream>
#include <string>
#include <unordered_map>
#include <sstream>
using namespace std;

int main() {
    // Create an unordered_map to store word frequencies.
    unordered_map<string, int> wordFrequency;

    // Input text (you can replace this with your own text).
    string text = "This is a simple word frequency counter. It counts the frequency of each word in a given input text. This is a simple example.";

    // Tokenize the input text.
    istringstream stream(text);
    string word;
    
    while (stream >> word) {
        // Remove any punctuation or special characters if needed.
        // Here, we'll consider a word as-is, without special character removal.

        // Convert the word to lowercase (optional, for case-insensitive counting).
        // To count words case-sensitive, remove the following line.
        for (char &c : word) {
            c = tolower(c);
        }

        // Update word frequency in the unordered_map.
        wordFrequency[word]++;
    }

    // Print word frequencies.
    for (const auto& pair : wordFrequency) {
        cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
