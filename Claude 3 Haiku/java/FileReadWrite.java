import java.io.*;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.stream.Collectors;

public class FileReadWrite {
    public static void main(String[] args) {
        try {
            // Read content from the input file
            String inputFilePath = "input.txt";
            String inputContent = Files.lines(Paths.get(inputFilePath))
                                      .collect(Collectors.joining("\n"));

            // Write content to the output file
            String outputFilePath = "output.txt";
            Files.write(Paths.get(outputFilePath), inputContent.getBytes());

            System.out.println("File read and write operations completed successfully.");
        } catch (IOException e) {
            System.out.println("An error occurred: " + e.getMessage());
        }
    }
}

