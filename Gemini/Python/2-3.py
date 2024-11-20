def copy_file(input_file, output_file):
    try:
        with open(input_file, 'r') as f_in, open(output_file, 'w') as f_out:
            for line in f_in:
                f_out.write(line)
        print("File copied successfully.")
    except FileNotFoundError:
        print("Error: Input file not found.")

input_file = input("Enter the input file name: ")
output_file = input("Enter the output file name: ")
copy_file(input_file, output_file)

