#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // Target not found
}

int main() {
    vector<int> sortedList;
    int target, index;

    // Get the sorted list from the user
    cout << "Enter the sorted list (space-separated integers): ";
    int num;
    while (cin >> num) {
        sortedList.push_back(num);
    }
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Get the target value from the user
    cout << "Enter the target value: ";
    cin >> target;

    // Perform binary search and get the index
    index = binarySearch(sortedList, target);

    if (index == -1) {
        cout << "Target value not found in the list." << endl;
    } else {
        cout << "The target value is at index " << index << "." << endl;
    }

    return 0;
}

