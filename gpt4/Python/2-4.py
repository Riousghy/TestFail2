def binary_search(sorted_list, target):
    low, high = 0, len(sorted_list) - 1

    while low <= high:
        mid = (low + high) // 2
        if sorted_list[mid] == target:
            return mid
        elif sorted_list[mid] < target:
            low = mid + 1
        else:
            high = mid - 1
    return -1

# Example usage:
sorted_list = [10, 20, 30, 40, 50, 60, 70, 80, 90]
target = int(input("Enter the target value: "))
index = binary_search(sorted_list, target)
if index != -1:
    print(f"Target found at index: {index}")
else:
    print("Target not found in the list.")


