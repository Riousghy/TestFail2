#include <iostream>
#include <vector>
#include <algorithm> // For sort

int binarySearch(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Target found
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // Target not found
}

int main() {
    int n, target;
    std::cout << "Enter the number of elements in the sorted list: ";
    std::cin >> n;

    std::vector<int> arr(n);
    std::cout << "Enter the sorted elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Enter the target value to search for: ";
    std::cin >> target;

    int index = binarySearch(arr, target);

    if (index != -1) {
        std::cout << "Target value found at index: " << index << std::endl;
    } else {
        std::cout << "Target value not found in the list." << std::endl;
    }

    return 0;
}

