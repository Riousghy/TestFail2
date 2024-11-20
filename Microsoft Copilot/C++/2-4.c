#include <iostream>
using namespace std;

int binarySearch(int sortedList[], int target, int size) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (sortedList[mid] == target) {
            return mid;
        } else if (sortedList[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int size;
    cout << "Enter the size of the sorted list: ";
    cin >> size;

    int sortedList[size];
    cout << "Enter the sorted list: ";
    for (int i = 0; i < size; i++) {
        cin >> sortedList[i];
    }

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    int result = binarySearch(sortedList, target, size);

    if (result != -1) {
        cout << "Target value found at index: " << result << endl;
    } else {
        cout << "Target value not found in the list" << endl;
    }

    return 0;
}

