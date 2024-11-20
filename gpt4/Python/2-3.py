def file_copy():
    with open('input.txt', 'r') as infile, open('output.txt', 'w') as outfile:
        content = infile.read()
        outfile.write(content)
    print("Content has been copied to output.txt.")

file_copy()


