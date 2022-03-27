import os
import shutil

# Create and write file
file1 = open("first.txt", "w")
file1.write("Hello Lokesh! How are you?")
file1.close()

# Print contents of created file
file1 = open("first.txt", "r")
print(file1.read())
file1.close()

# Append contents to file
file1 = open("first.txt", "a")
file1.writelines("\nHi hello")
file1.close()

# Print contents of modified file
file1 = open("first.txt", "r")
print(file1.read())
file1.close()

# Rename file
os.rename("first.txt", "second.txt")

# Copy the contents of file
shutil.copyfile("second.txt", "first.txt")

# Change the contents of renamed file
file1 = open("first.txt", "w")
file1.write("This is copied file")
file1.close()

# Print contents of renamed file
file1 = open("first.txt", "r")
print(file1.read())
file1.close()
