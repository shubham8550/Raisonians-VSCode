import os

fist = ""
second = ""

# Creating and writing file
f = open("Gayatri/demo.txt", "w")
f.write("Hello Gayatri! How are you?")
f.close()

# Appending file
f = open("Gayatri/demo.txt", "a")
f.write(" Hii this is new lines added in file")
f.close()

# Reading file
f = open("Gayatri/demo.txt", "r")
content = f.read()
first = content
print(content)
f.close()

# Second file
f1 = open("Gayatri/file1.txt", "w")
f1.write(" Hey hi hello ola byee")
f1.close()

# Rename file
os.rename("Gayatri/file1.txt", "Gayatri/demo2.txt")

# Merge both files
f1 = open("Gayatri/demo2.txt", "r")
second_content = f1.read()
second = second_content
print(second_content)
f1.close()

both_file = first + second
print(both_file)

f2 = open("Gayatri/merge.txt", "w")
f2.write(both_file)
f2.close()