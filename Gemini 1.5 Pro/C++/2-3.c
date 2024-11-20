#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  string line;

  // Create input and output file streams
  ifstream inputFile("input.txt"); 
  ofstream outputFile("output.txt");

  // Check if input file opened successfully
  if (inputFile.is_open()) {
    // Read from input file and write to output file
    while (getline(inputFile, line)) {
      outputFile << line << endl;
    }

    // Close both files
    inputFile.close();
    outputFile.close();

    cout << "File read and write operation successful." << endl;
  } else {
    cout << "Unable to open input file." << endl;
  }

  return 0;
}

