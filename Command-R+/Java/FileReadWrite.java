import java.io.BufferedReader;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class FileReadWrite {

    public static void main(String[] args) {
        String inputFile = "input.txt";
        String outputFile = "output.txt";

        try {
            BufferedReader reader = new BufferedReader(new FileReader(inputFile));
            FileWriter writer = new FileWriter(outputFile);

            String line;
            while ((line = reader.readLine()) != null) {
                writer.write(line + System.lineSeparator());
            }

            System.out.println("File read and write operation completed successfully.");

            reader.close();
            writer.close();
        } catch (IOException e) {
            System.out.println("An error occurred while reading/writing files.");
            e.printStackTrace();
        }
    }
}

