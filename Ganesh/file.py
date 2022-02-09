#Programt for file handling.
import os
fp= open("file.txt",'w')
fp.write("Javascript is future of web3")
os.rename('file.txt', 'file_copy.txt')
fp.close() 

#file read
fp= open("file_copy.txt", "r")
print(fp.read())

