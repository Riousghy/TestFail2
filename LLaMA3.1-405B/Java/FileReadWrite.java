import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class FileReadWrite {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the source file name: ");
        String sourceFile = scanner.nextLine();

        System.out.print("Enter the destination file name: ");
        String destinationFile = scanner.nextLine();

        try {
            File file = new File(sourceFile);
            Scanner fileScanner = new Scanner(file);

            StringBuilder content = new StringBuilder();
            while (fileScanner.hasNextLine()) {
                content.append(fileScanner.nextLine()).append("\n");
            }
            fileScanner.close();

            FileWriter writer = new FileWriter(destinationFile);
            writer.write(content.toString());
            writer.close();

            System.out.println("Content copied successfully!");
        } catch (FileNotFoundException e) {
            System.out.println("Source file not found!");
        } catch (IOException e) {
            System.out.println("Error writing to destination file!");
        }

        scanner.close();
    }
}

