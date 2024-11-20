#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    if (!inputFile.is_open()) {
        cout << "Error opening input file." << endl;
        return 1;
    }

    if (!outputFile.is_open()) {
        cout << "Error opening output file." << endl;
        return 1;
    }

    char ch;
    while (inputFile.get(ch)) {
        outputFile << ch;
    }

    inputFile.close();
    outputFile.close();

    cout << "File copied successfully." << endl;

    return 0;
}

