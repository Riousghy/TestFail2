// File Read and Write Operations Program

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.io.FileWriter;
import java.io.IOException;

public class FileReadWriteOperations {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("File Read and Write Operations Program");
        System.out.print("Enter the input filename: ");
        String inputFilename = scanner.nextLine();

        System.out.print("Enter the output filename: ");
        String outputFilename = scanner.nextLine();

        try {
            File inputFile = new File(inputFilename);
            Scanner fileScanner = new Scanner(inputFile);

            StringBuilder content = new StringBuilder();
            while (fileScanner.hasNextLine()) {
                content.append(fileScanner.nextLine()).append("\n");
            }
            fileScanner.close();

            FileWriter fileWriter = new FileWriter(outputFilename);
            fileWriter.write(content.toString());
            fileWriter.close();

            System.out.println("Content written to " + outputFilename);
        } catch (FileNotFoundException e) {
            System.out.println("Input file not found.");
        } catch (IOException e) {
            System.out.println("Error writing to output file.");
        }

        scanner.close();
    }
}

