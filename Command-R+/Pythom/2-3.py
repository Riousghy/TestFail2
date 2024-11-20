input_file = "input.txt"
output_file = "output.txt"

try:
    with open(input_file, 'r') as infile, open(output_file, 'w') as outfile:
        content = infile.read()
        outfile.write(content)
    print("File read and write operation completed successfully.")
except FileNotFoundError:
    print("Error: One or both files not found.")

