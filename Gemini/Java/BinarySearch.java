public class BinarySearch {
    public static int binarySearch(int[] arr, int left, int right, int target) {
        if (right >= left) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == target)
                return mid;

            if (arr[mid] > target)
                return binarySearch(arr, left, mid - 1, target);

            return binarySearch(arr, mid + 1, right, target);
        }

        return -1;
    }

    public static void main(String[] args) {
        int[] arr = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
        int n = arr.length;
        int target = 23;
        int result = binarySearch(arr, 0, n - 1, target);

        if (result == -1)
            System.out.println("Element is not present in array");
        else
            System.out.println("Element is present at index " + result);
    }
}

