#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");
    if (!inFile.is_open() || !outFile.is_open()) {
        cout << "Error opening files!" << endl;
        return 1;
    }
    string line;
    while (getline(inFile, line)) {
        outFile << line << endl;
    }
    inFile.close();
    outFile.close();
    cout << "File has been copied." << endl;
    return 0;
}


