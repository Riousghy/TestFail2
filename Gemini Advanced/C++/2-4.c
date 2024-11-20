#include <iostream>
#include <vector>

// Function to implement binary search
int binarySearch(const std::vector<int>& sortedList, int target) {
    int left = 0;
    int right = sortedList.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Calculate the middle index

        // Check if the target is present at the middle
        if (sortedList[mid] == target) {
            return mid; // Target found, return its index
        }

        // If the target is greater, ignore the left half
        if (sortedList[mid] < target) {
            left = mid + 1;
        } else { // If the target is smaller, ignore the right half
            right = mid - 1;
        }
    }

    return -1; // Target not found
}

int main() {
    std::vector<int> sortedList;
    int size, target;

    // Get the size of the sorted list from the user
    std::cout << "Enter the size of the sorted list: ";
    std::cin >> size;

    // Get the elements of the sorted list from the user
    std::cout << "Enter the elements of the sorted list in ascending order:\n";
    for (int i = 0; i < size; ++i) {
        int element;
        std::cin >> element;
        sortedList.push_back(element);
    }

    // Get the target value from the user
    std::cout << "Enter the target value to search for: ";
    std::cin >> target;

    // Perform binary search
    int result = binarySearch(sortedList, target);

    // Output the result
    if (result != -1) {
        std::cout << "Target value found at index: " << result << std::endl;
    } else {
        std::cout << "Target value not found in the list." << std::endl;
    }

    return 0;
}

