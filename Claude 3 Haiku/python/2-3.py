def read_write_files():
    try:
        # Read content from the input file
        with open("input.txt", "r") as input_file:
            input_content = input_file.read()

        # Write content to the output file
        with open("output.txt", "w") as output_file:
            output_file.write(input_content)

        print("File read and write operations completed successfully.")
    except IOError:
        print("An error occurred while accessing the files.")

if __name__ == "__main__":
    read_write_files()

