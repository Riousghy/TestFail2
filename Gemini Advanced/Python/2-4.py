def binary_search(sorted_list, target):
    left, right = 0, len(sorted_list) - 1

    while left <= right:
        mid = (left + right) // 2
        if sorted_list[mid] == target:
            return mid
        elif sorted_list[mid] < target:
            left = mid + 1
        else:
            right = mid - 1

    return -1  # Target not found

sorted_list = [int(x) for x in input("Enter the sorted list (space-separated): ").split()]
target = int(input("Enter the target value: "))

result = binary_search(sorted_list, target)

if result != -1:
    print(f"Target value found at index: {result}")
else:
    print("Target value not found in the list.")

