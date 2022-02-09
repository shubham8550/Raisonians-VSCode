import os
import shutil

# Create and write file
file1 = open("Lokesh/first.txt", "w")
file1.write("Hello world")
file1.close()

# Print contents of created file
file1 = open("Lokesh/first.txt", "r")
print(file1.read())
file1.close()

# Append contents to file
file1 = open("Lokesh/first.txt", "a")
file1.writelines("\nHi hello")
file1.close()

# Print contents of modified file
file1 = open("Lokesh/first.txt", "r")
print(file1.read())
file1.close()

#  Rename file
os.rename("Lokesh/first.txt", "Lokesh/second.txt")

# Copy the contents of file
shutil.copyfile("Lokesh/second.txt", "Lokesh/first.txt")

# Change the contents of renamed file
file1 = open("Lokesh/first.txt", "w")
file1.write("This is copied file")
file1.close()

# Print contents of renamed file
file1 = open("Lokesh/first.txt", "r")
print(file1.read())
file1.close()
