import java.util.Arrays;
import java.util.Scanner;

public class BinarySearch {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the size of the sorted list: ");
        int size = scanner.nextInt();

        int[] sortedList = new int[size];

        System.out.println("Enter the elements of the sorted list:");
        for (int i = 0; i < size; i++) {
            sortedList[i] = scanner.nextInt();
        }

        System.out.print("Enter the target value: ");
        int target = scanner.nextInt();

        int index = binarySearch(sortedList, target);

        if (index == -1) {
            System.out.println("Target value not found in the list.");
        } else {
            System.out.println("Target value found at index " + index + ".");
        }

        scanner.close();
    }

    public static int binarySearch(int[] sortedList, int target) {
        int left = 0;
        int right = sortedList.length - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (sortedList[mid] == target) {
                return mid;
            } else if (sortedList[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return -1;
    }
}

