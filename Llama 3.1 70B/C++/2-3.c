// File Read and Write Operations Program

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void readFile(const string& filename) {
    ifstream file(filename);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Unable to open file." << endl;
    }
}

void writeFile(const string& filename, const string& content) {
    ofstream file(filename);
    if (file.is_open()) {
        file << content;
        file.close();
    } else {
        cout << "Unable to open file." << endl;
    }
}

int main() {
    string inputFilename, outputFilename;

    cout << "File Read and Write Operations Program" << endl;
    cout << "Enter the input filename: ";
    cin >> inputFilename;

    cout << "Enter the output filename: ";
    cin >> outputFilename;

    string content;
    readFile(inputFilename);
    cout << "Enter the content to write to the output file: ";
    cin.ignore();
    getline(cin, content);
    writeFile(outputFilename, content);

    return 0;
}

