import java.util.Arrays;
import java.util.Scanner;

public class BinarySearch {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the size of the sorted list: ");
        int size = scanner.nextInt();

        int[] sortedList = new int[size];
        System.out.println("Enter the elements of the sorted list in ascending order:");
        for (int i = 0; i < size; i++) {
            sortedList[i] = scanner.nextInt();
        }

        System.out.print("Enter the target value to search for: ");
        int target = scanner.nextInt();

        int result = Arrays.binarySearch(sortedList, target);

        if (result >= 0) {
            System.out.println("Target value found at index: " + result);
        } else {
            System.out.println("Target value not found in the list.");
        }
    }
}

