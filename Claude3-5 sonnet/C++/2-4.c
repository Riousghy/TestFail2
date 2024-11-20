#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& sortedList, int target) {
    int left = 0;
    int right = sortedList.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (sortedList[mid] == target) {
            return mid;
        } else if (sortedList[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // Target value not found
}

int main() {
    int size;
    cout << "Enter the size of the sorted list: ";
    cin >> size;

    vector<int> sortedList(size);
    cout << "Enter the elements of the sorted list:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> sortedList[i];
    }

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    int index = binarySearch(sortedList, target);

    if (index == -1) {
        cout << "Target value not found in the list." << endl;
    } else {
        cout << "Target value found at index " << index << "." << endl;
    }

    return 0;
}

