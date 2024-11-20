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
  vector<int> arr = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
  int target;

  cout << "Enter the target value: ";
  cin >> target;

  int index = binarySearch(arr, target);

  if (index != -1) {
    cout << "Target value found at index: " << index << endl;
  } else {
    cout << "Target value not found in the list." << endl;
  }

  return 0;
}

