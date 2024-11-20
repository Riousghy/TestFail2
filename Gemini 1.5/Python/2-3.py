
# 3. File Read and Write

def file_read_write():
  """
  This function reads content from one file and writes it to another file.
  """
  try:
    with open("input.txt", "r") as file_in:  # Open the input file in read mode
      content = file_in.read()  # Read the content of the file

    with open("output.txt", "w") as file_out:  # Open the output file in write mode
      file_out.write(content)  # Write the content to the output file

    print("File copied successfully!")
  except FileNotFoundError:
    print("Error: Input file not found!")


if __name__ == "__main__":
  file_read_write()

