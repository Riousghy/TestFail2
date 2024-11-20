def binary_search(arr, target):
    left, right = 0, len(arr) - 1

    while left <= right:
        mid = left + (right - left) // 2

        if arr[mid] == target:
            return mid

        if arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1

    return -1

def main():
    arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    target = int(input("Enter the target value: "))

    index = binary_search(arr, target)

    if index != -1:
        print("Target value found at index:", index)
    else:
        print("Target value not found.")

main()

