def binary_search(arr, target):
    left, right = 0, len(arr) - 1

    while left <= right:
        mid = left + (right - left) // 2

        if arr[mid] == target:
            return mid  # Target found
        elif arr[mid] < target:
            left = mid + 1  # Search in the right half
        else:
            right = mid - 1  # Search in the left half
    return -1  # Target not found

def main():
    n = int(input("Enter the number of elements in the sorted list: "))
    arr = list(map(int, input("Enter the sorted elements: ").split()))
    target = int(input("Enter the target value to search for: "))

    index = binary_search(arr, target)

    if index != -1:
        print(f"Target value {target} found at index: {index}")
    else:
        print(f"Target value {target} not found in the list.")

main()

