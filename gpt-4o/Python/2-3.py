def file_read_write():
    input_file_path = 'input.txt'
    output_file_path = 'output.txt'

    try:
        with open(input_file_path, 'r') as infile, open(output_file_path, 'w') as outfile:
            content = infile.read()
            outfile.write(content)
        return f"Content copied from {input_file_path} to {output_file_path}."
    except FileNotFoundError:
        return "Error: Input file not found."

print(file_read_write())

