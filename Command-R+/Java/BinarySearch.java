import java.util.Arrays;
import java.util.Scanner;

public class BinarySearch {

    public static int binarySearch(int[] sortedList, int target) {
        int left = 0, right = sortedList.length - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (sortedList[mid] == target) {
                return mid; // Found the target
            } else if (sortedList[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return -1; // Target not found
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n;
        System.out.print("Enter the number of elements in the sorted list: ");
        n = scanner.nextInt();

        int[] sortedList = new int[n];
        System.out.println("Enter the sorted list of integers:");
        for (int i = 0; i < n; i++) {
            sortedList[i] = scanner.nextInt();
        }

        int target;
        System.out.print("Enter the target value to search: ");
        target = scanner.nextInt();

        int index = binarySearch(sortedList, target);

        if (index != -1) {
            System.out.println("Target value found at index: " + index);
        } else {
            System.out.println("Target value not found in the list.");
        }

        scanner.close();
    }
}

