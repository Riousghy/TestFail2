def file_copy():
    input_file_name = input("Enter the name of the input file: ")
    output_file_name = input("Enter the name of the output file: ")

    try:
        with open(input_file_name, 'r') as input_file:
            content = input_file.read()

        with open(output_file_name, 'w') as output_file:
            output_file.write(content)

        print("File content copied successfully.")
    except FileNotFoundError:
        print("Error: The input file was not found.")
    except IOError as e:
        print(f"An error occurred: {e}")

file_copy()

