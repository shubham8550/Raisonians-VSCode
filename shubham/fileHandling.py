
import os

f = open("shubham2.txt","w")

f.write("this is by shoubham in python")

os.rename(f.name, "shoubham3.txt")

