def file_copy():
    try:
        with open('input.txt', 'r') as input_file:
            content = input_file.read()

        with open('output.txt', 'w') as output_file:
            output_file.write(content)

        print("File content copied successfully.")
    except IOError as e:
        print("Error:", e)

file_copy()

