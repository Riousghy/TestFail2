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

    return -1

def main():
    n = int(input("Enter the number of elements in the sorted list: "))
    sorted_list = [int(input(f"Enter element {i+1}: ")) for i in range(n)]
    sorted_list.sort()

    target = int(input("Enter the target value to search: "))

    index = binary_search(sorted_list, target)

    if index != -1:
        print("Target value found at index:", index)
    else:
        print("Target value not found in the list.")

if __name__ == "__main__":
    main()

