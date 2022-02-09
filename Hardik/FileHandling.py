import shutil
import os

fp =open("Test.txt","w")
fp.write("My name is Hardik Jain.")

shutil.copyfile("Hardik/Test.txt", "Hardik/Demo.txt")
# Test.txt - Demo.txt

os.rename("Hardik/Test.txt", "Hardik/OriginalFile.txt")
# OriginalFile.txt - Demo.txt

os.rename("Hardik/Demo.txt", "Hardik/CopiedFile.txt")
# OriginalFile.txt - CopiedFile.txt

fp.close()

fp =open("Hardik/CopiedFile.txt","w")
fp.write("This is copied file by Hardik Jain.")
fp.close()