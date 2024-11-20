import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class FileCopy {
    public static void main(String[] args) {
        try (FileReader inputFile = new FileReader("input.txt");
             FileWriter outputFile = new FileWriter("output.txt")) {

            int character;
            while ((character = inputFile.read()) != -1) {
                outputFile.write(character);
            }

            System.out.println("File content copied successfully.");
        } catch (IOException e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}

