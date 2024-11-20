#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target;

    cout << "Enter the target value: ";
    cin >> target;

    int index = binarySearch(arr, target);

    if (index != -1)
        cout << "Target value found at index: " << index << endl;
    else
        cout << "Target value not found." << endl;

    return 0;
}

