//Natalija Stefanovska INKI1004
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>

struct Song {
    int number;
    std::string artist;
    std::string verse;
};

int main() {

    const Song song = {1004, "Natalija, Harry Styles,", "In this world is just us you know its not the same as it was."};


    std::string input;
    std::cout << "Vnesi 4 cifren broj: ";
    std::cin >> input;


    char largestDigit = *std::max_element(input.begin(), input.end());

    std::cout << "Najgolemata cifra: " << largestDigit << std::endl;


    std::vector<int> asciiValues;
    std::string str = std::to_string(song.number) + "." + song.artist + " " + song.verse;
    for (char c : str) {
        asciiValues.push_back(static_cast<int>(c));
    }


    std::sort(asciiValues.begin(), asciiValues.end());
    std::cout << "Sortirani ASCII vrednosti: ";
    for (int value : asciiValues) {
        std::cout << value << " ";
    }
    std::cout << std::endl;


    std::ofstream outputFile("INKI1004.Proekt3.txt");
    if (outputFile.is_open()) {
        for (int value : asciiValues) {
            outputFile << value << " ";
        }
        outputFile.close();
        std::cout << "Sodrzhinata e vmetnata vo INKI1004.Proekt3'" << std::endl;
    } else {
        std::cerr << "Error. Fajlot ne e pronajden." << std::endl;
    }

    return 0;
}
