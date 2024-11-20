#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Open the input file
    ifstream inputFile("input.txt");
    if (!inputFile.is_open()) {
        cout << "Unable to open input file." << endl;
        return 1;
    }

    // Open the output file
    ofstream outputFile("output.txt");
    if (!outputFile.is_open()) {
        cout << "Unable to open output file." << endl;
        inputFile.close();
        return 1;
    }

    // Read the content from the input file and write it to the output file
    string line;
    while (getline(inputFile, line)) {
        outputFile << line << endl;
    }

    // Close the files
    inputFile.close();
    outputFile.close();

    cout << "File read and write operations completed successfully." << endl;

    return 0;
}

