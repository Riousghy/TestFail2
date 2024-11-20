def binary_search(arr, target):
    """
    Performs binary search on a sorted list to find the index of a target value.

    Args:
      arr: A sorted list of integers.
      target: The value to search for.

    Returns:
      The index of the target value if found, otherwise -1.
    """
    left = 0
    right = len(arr) - 1

    while left <= right:
        mid = left + (right - left) // 2

        if arr[mid] == target:
            return mid  # Target found
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1

    return -1  # Target not found


if __name__ == '__main__':
    arr = [2, 5, 7, 8, 11, 15]
    target = 11

    index = binary_search(arr, target)

    if index != -1:
        print(f"Target {target} found at index {index}")
    else:
        print(f"Target {target} not found!")

