#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Target found
        }
        if (arr[mid] < target) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }
    return -1; // Target not found
}

int main() {
    int n, target;

    cout << "Enter the number of elements in the sorted list: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target value to search for: ";
    cin >> target;

    int index = binarySearch(arr, target);

    if (index != -1) {
        cout << "Target value " << target << " found at index: " << index << endl;
    } else {
        cout << "Target value " << target << " not found in the list." << endl;
    }

    return 0;
}

