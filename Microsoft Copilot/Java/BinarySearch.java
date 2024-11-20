import java.util.Arrays;
import java.util.Scanner;

public class BinarySearch {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the sorted list (space-separated): ");
        String[] input = scanner.nextLine().split(" ");
        int[] sortedList = new int[input.length];

        for (int i = 0; i < input.length; i++) {
            sortedList[i] = Integer.parseInt(input[i]);
        }

        System.out.print("Enter the target value: ");
        int target = scanner.nextInt();

        int result = binarySearch(sortedList, target);

        if (result != -1) {
            System.out.println("Target value found at index: " + result);
        } else {
            System.out.println("Target value not found in the list");
        }

        scanner.close();
    }

    public static int binarySearch(int[] sortedList, int target) {
        int low = 0;
        int high = sortedList.length - 1;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (sortedList[mid] == target) {
                return mid;
            } else if (sortedList[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return -1;
    }
}

