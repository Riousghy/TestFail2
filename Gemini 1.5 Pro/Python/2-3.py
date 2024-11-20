# Get the names of the input and output files
input_filename = input("Enter the name of the input file: ")
output_filename = input("Enter the name of the output file: ")

# Open the input file for reading ("r") and the output file for writing ("w")
try:
    with open(input_filename, "r") as input_file, open(output_filename, "w") as output_file:
        # Read the content of the input file line by line
        for line in input_file:
            # Write each line to the output file
            output_file.write(line)

    print(f"Successfully copied content from '{input_filename}' to '{output_filename}'")

except FileNotFoundError:
    print(f"Error: Input file '{input_filename}' not found.")
except Exception as e:
    print(f"An error occurred: {e}")

