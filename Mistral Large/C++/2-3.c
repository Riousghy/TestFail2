#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    if (!inputFile) {
        cout << "Error opening input file." << endl;
        return 1;
    }

    if (!outputFile) {
        cout << "Error opening output file." << endl;
        return 1;
    }

    string line;
    while (getline(inputFile, line)) {
        outputFile << line << endl;
    }

    inputFile.close();
    outputFile.close();

    cout << "File content copied successfully." << endl;
    return 0;
}

