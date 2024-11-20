#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string inputFilePath = "input.txt";
    string outputFilePath = "output.txt";
    string content;

    // Read from the input file
    ifstream inputFile(inputFilePath);
    if (inputFile.is_open()) {
        string line;
        while (getline(inputFile, line)) {
            content += line + "\n";
        }
        inputFile.close();
    } else {
        cout << "Unable to open input file." << endl;
        return 1;
    }

    // Write to the output file
    ofstream outputFile(outputFilePath);
    if (outputFile.is_open()) {
        outputFile << content;
        outputFile.close();
        cout << "File content copied from " << inputFilePath << " to " << outputFilePath << endl;
    } else {
        cout << "Unable to open output file." << endl;
        return 1;
    }

    return 0;
}

