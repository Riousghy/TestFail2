import java.util.Scanner;

public class BinarySearch {
    public static int binarySearch(int[] array, int target) {
        int low = 0;
        int high = array.length - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (array[mid] == target) {
                return mid;
            } else if (array[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] sortedArray = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
        System.out.print("Enter a number to search: ");
        int target = scanner.nextInt();

        int result = binarySearch(sortedArray, target);
        if (result == -1) {
            System.out.println("Element not found in the array.");
        } else {
            System.out.println("Element found at index: " + result);
        }
        scanner.close();
    }
}


