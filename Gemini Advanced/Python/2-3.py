def file_read_write():
    try:
        with open("input.txt", "r") as infile, open("output.txt", "w") as outfile:
            content = infile.read()
            outfile.write(content)
        return "File content copied successfully!"
    except FileNotFoundError:
        return "Error: Input file not found."
    except IOError as e:
        return f"An error occurred: {e}"

print(file_read_write())

