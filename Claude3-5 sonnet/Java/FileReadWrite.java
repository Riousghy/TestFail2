import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class FileReadWrite {
    public static void main(String[] args) {
        String inputFilePath = "input.txt";
        String outputFilePath = "output.txt";

        try {
            // Read from the input file
            FileReader reader = new FileReader(inputFilePath);
            int character;
            StringBuilder content = new StringBuilder();

            while ((character = reader.read()) != -1) {
                content.append((char) character);
            }

            reader.close();

            // Write to the output file
            FileWriter writer = new FileWriter(outputFilePath);
            writer.write(content.toString());
            writer.close();

            System.out.println("File content copied from " + inputFilePath + " to " + outputFilePath);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}

