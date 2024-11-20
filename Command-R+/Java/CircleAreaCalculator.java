import java.util.Scanner;

public class CircleAreaCalculator {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        double radius, area;

        System.out.println("Circle Area Calculator");
        System.out.print("Enter the radius of the circle: ");
        radius = scanner.nextDouble();

        area = Math.PI * radius * radius;

        System.out.println("The area of the circle is: " + area);

        scanner.close();
    }
}

