#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Read from input.txt and write to output.txt
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    if (!inputFile.is_open()) {
        cout << "Error opening input file!" << endl;
        return 1;
    }

    if (!outputFile.is_open()) {
        cout << "Error opening output file!" << endl;
        return 1;
    }

    string line;
    while (getline(inputFile, line)) {
        outputFile << line << endl;
    }

    inputFile.close();
    outputFile.close();

    cout << "File copied successfully!" << endl;

    return 0;
}

