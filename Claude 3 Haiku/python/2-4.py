def binary_search(sorted_list, target):
    left = 0
    right = len(sorted_list) - 1

    while left <= right:
        mid = (left + right) // 2

        if sorted_list[mid] == target:
            return mid
        elif sorted_list[mid] < target:
            left = mid + 1
        else:
            right = mid - 1

    return -1  # Target not found

def main():
    sorted_list = [int(x) for x in input("Enter the sorted list (space-separated integers): ").split()]
    target = int(input("Enter the target value: "))

    index = binary_search(sorted_list, target)

    if index == -1:
        print("Target value not found in the list.")
    else:
        print(f"The target value is at index {index}.")

if __name__ == "__main__":
    main()

