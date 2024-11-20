#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string inputFileName, outputFileName;
    std::cout << "Enter the name of the input file: ";
    std::cin >> inputFileName;
    std::cout << "Enter the name of the output file: ";
    std::cin >> outputFileName;

    std::ifstream inputFile(inputFileName);
    std::ofstream outputFile(outputFileName);

    if (!inputFile) {
        std::cerr << "Error: Could not open input file." << std::endl;
        return 1;
    }

    if (!outputFile) {
        std::cerr << "Error: Could not open output file." << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        outputFile << line << std::endl;
    }

    inputFile.close();
    outputFile.close();

    std::cout << "File content copied successfully." << std::endl;

    return 0;
}

