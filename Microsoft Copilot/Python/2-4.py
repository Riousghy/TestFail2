def binary_search():
    sorted_list = list(map(int, input("Enter the sorted list (space-separated): ").split()))
    target = int(input("Enter the target value: "))

    low = 0
    high = len(sorted_list) - 1

    while low <= high:
        mid = (low + high) // 2
        if sorted_list[mid] == target:
            print("Target value found at index:", mid)
            return
        elif sorted_list[mid] < target:
            low = mid + 1
        else:
            high = mid - 1

    print("Target value not found in the list")

binary_search()

