# File Read and Write Operations Program

def read_file(filename):
    """Returns the content of a file."""
    try:
        with open(filename, 'r') as file:
            return file.read()
    except FileNotFoundError:
        print("File not found!")
        return None

def write_file(filename, content):
    """Writes content to a file."""
    with open(filename, 'w') as file:
        file.write(content)

def main():
    print("File Read and Write Operations Program")
    input_filename = input("Enter the input filename: ")
    output_filename = input("Enter the output filename: ")

    content = read_file(input_filename)
    if content:
        write_file(output_filename, content)
        print("Content written to", output_filename)

if __name__ == "__main__":
    main()

