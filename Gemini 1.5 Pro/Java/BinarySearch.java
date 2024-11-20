import java.util.Arrays;
import java.util.Scanner;

public class BinarySearch {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int[] arr = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
        System.out.print("Enter the target value: ");
        int target = scanner.nextInt();

        int index = Arrays.binarySearch(arr, target);

        if (index >= 0) {
            System.out.println("Target value found at index: " + index);
        } else {
            System.out.println("Target value not found in the list.");
        }
    }
}

