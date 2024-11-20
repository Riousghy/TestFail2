#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string inputFilename, outputFilename;

    cout << "Enter input file name: ";
    cin >> inputFilename;

    cout << "Enter output file name: ";
    cin >> outputFilename;

    ifstream inputFile(inputFilename);
    ofstream outputFile(outputFilename);

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

