def file_read_write():
    input_file_path = "input.txt"
    output_file_path = "output.txt"

    try:
        # Read from the input file
        with open(input_file_path, "r") as input_file:
            content = input_file.read()

        # Write to the output file
        with open(output_file_path, "w") as output_file:
            output_file.write(content)

        print(f"File content copied from {input_file_path} to {output_file_path}")
    except FileNotFoundError:
        print(f"Error: {input_file_path} not found.")
    except IOError:
        print("An error occurred while reading or writing the file.")

file_read_write()

