def file_read_write():
    source_file = input("Enter the source file name: ")
    destination_file = input("Enter the destination file name: ")

    try:
        with open(source_file, 'r') as file:
            content = file.read()

        with open(destination_file, 'w') as file:
            file.write(content)

        print("Content copied successfully!")

    except FileNotFoundError:
        print("Source file not found!")

file_read_write()

