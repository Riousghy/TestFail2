#include <iostream>
#include <vector>
#include <algorithm>

int binarySearch(const std::vector<int>& sortedList, int target) {
    int left = 0, right = sortedList.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (sortedList[mid] == target) {
            return mid; // Found the target
        } else if (sortedList[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // Target not found
}

int main() {
    int n;
    std::cout << "Enter the number of elements in the sorted list: ";
    std::cin >> n;

    std::vector<int> sortedList(n);
    std::cout << "Enter the sorted list of integers:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> sortedList[i];
    }

    int target;
    std::cout << "Enter the target value to search: ";
    std::cin >> target;

    int index = binarySearch(sortedList, target);

    if (index != -1) {
        std::cout << "Target value found at index: " << index << std::endl;
    } else {
        std::cout << "Target value not found in the list." << std::endl;
    }

    return 0;
}

