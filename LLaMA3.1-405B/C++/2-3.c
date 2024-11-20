#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string sourceFile, destinationFile;

    cout << "Enter the source file name: ";
    cin >> sourceFile;

    cout << "Enter the destination file name: ";
    cin >> destinationFile;

    ifstream source(sourceFile);
    ofstream destination(destinationFile);

    if (source.is_open() && destination.is_open()) {
        string line;
        while (getline(source, line)) {
            destination << line << endl;
        }
        source.close();
        destination.close();
        cout << "Content copied successfully!" << endl;
    } else {
        cout << "Error opening file!" << endl;
    }

    return 0;
}

