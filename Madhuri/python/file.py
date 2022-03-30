import os

fist = ""
second = ""

# Creating and writing file
f = open("Madhuri/demo.txt", "w")
f.write("Hello Madhuri! How are you?")
f.close()

# Appending file
f = open("Madhuri/demo.txt", "a")
f.write(" Hii this is new lines added in file")
f.close()

# Reading file
f = open("Madhuri/demo.txt", "r")
content = f.read()
first = content
print(content)
f.close()

# Second file
f1 = open("Madhuri/file1.txt", "w")
f1.write(" Hey ")
f1.close()

# Rename file
os.rename("Madhuri/file1.txt", "Madhuri/demo2.txt")

# Merge both files
f1 = open("Madhuri/demo2.txt", "r")
second_content = f1.read()
second = second_content
print(second_content)
f1.close()

both_file = first + second
print(both_file)

f2 = open("Madhuri/merge.txt", "w")
f2.write(both_file)
f2.close()