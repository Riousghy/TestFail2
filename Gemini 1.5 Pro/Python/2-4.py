def binary_search(sorted_list, target):
    """
    Performs binary search on a sorted list.

    Args:
        sorted_list: The sorted list to search in.
        target: The value to search for.

    Returns:
        The index of the target value if found, otherwise -1.
    """
    low = 0
    high = len(sorted_list) - 1

    while low <= high:
        mid = (low + high) // 2  # Integer division
        if sorted_list[mid] == target:
            return mid
        elif sorted_list[mid] < target:
            low = mid + 1
        else:
            high = mid - 1

    return -1  # Target not found


# Example usage:
my_list = [2, 5, 7, 8, 11, 12]
target_value = 8

index = binary_search(my_list, target_value)

if index != -1:
    print(f"Target value {target_value} found at index {index}")
else:
    print(f"Target value {target_value} not found in the list")

