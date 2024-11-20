import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class FileReadWrite {
    public static void main(String[] args) {
        try {
            File inputFile = new File("input.txt"); // Replace with your input file name
            File outputFile = new File("output.txt"); // Replace with your output file name

            FileReader reader = new FileReader(inputFile);
            FileWriter writer = new FileWriter(outputFile);

            int character;
            while ((character = reader.read()) != -1) {
                writer.write(character);
            }

            reader.close();
            writer.close();

            System.out.println("File content copied successfully!");
        } catch (IOException e) {
            System.out.println("An error occurred: " + e.getMessage());
        }
    }
}

