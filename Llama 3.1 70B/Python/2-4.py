# Binary Search Program

def binary_search(arr, target):
    """Returns the index of the target value in a sorted list."""
    low, high = 0, len(arr) - 1

    while low <= high:
        mid = (low + high) // 2
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            low = mid + 1
        else:
            high = mid - 1

    return -1  # Target value not found

def main():
    print("Binary Search Program")
    arr = [int(x) for x in input("Enter a sorted list of numbers (space-separated): ").split()]
    target = int(input("Enter the target value: "))

    index = binary_search(arr, target)
    if index != -1:
        print("Target value found at index", index)
    else:
        print("Target value not found")

if __name__ == "__main__":
    main()

