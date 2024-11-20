import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

// public class BinarySearch {
public class BinarySearch {
    public static int binarySearch(List<Integer> sortedList, int target) {
        int left = 0;
        int right = sortedList.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (sortedList.get(mid) == target) {
                return mid;
            } else if (sortedList.get(mid) < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return -1; // Target not found
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        List<Integer> sortedList = new ArrayList<>();
        int target, index;

        // Get the sorted list from the user
        System.out.print("Enter the sorted list (space-separated integers): ");
        while (scanner.hasNextInt()) {
            sortedList.add(scanner.nextInt());
        }
        scanner.nextLine(); // Clear the newline character

        // Get the target value from the user
        System.out.print("Enter the target value: ");
        target = scanner.nextInt();

        // Perform binary search and get the index
        index = binarySearch(sortedList, target);

        if (index == -1) {
            System.out.println("Target value not found in the list.");
        } else {
            System.out.println("The target value is at index " + index + ".");
        }

        scanner.close();
    }
}

