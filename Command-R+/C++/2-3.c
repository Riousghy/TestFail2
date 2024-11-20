#include <iostream>
#include <fstream>

int main() {
    std::ifstream inputFile("input.txt");
    std::ofstream outputFile("output.txt");

    if (inputFile.is_open() && outputFile.is_open()) {
        std::string line;
        while (getline(inputFile, line)) {
            outputFile << line << std::endl;
        }
        std::cout << "File read and write operation completed successfully." << std::endl;
    } else {
        std::cout << "Error opening files." << std::endl;
    }

    inputFile.close();
    outputFile.close();

    return 0;
}

