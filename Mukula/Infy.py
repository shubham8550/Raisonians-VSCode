# start=1
# end=10
# step=2
# for number in range (start,end,step):
#     print("The current number is",number)

# for number in range(1,5):
#     print("The current number is",number)
#     print("---------------")
# for number in range(1,7,2):
#     print("The current number is",number)
# for number in range(5,0,-1):
#     print("The current number is",number)        

# No_of_passenger=5
# No_of_baggage=2
# security_check=True
# for No_of_passenger in range(1,No_of_passenger +1):
#     for No_of_baggage in range(1,No_of_baggage+1):
#         if(security_check==True):
#             print("Security check of count " ,No_of_passenger,"Passengers", No_of_baggage ,"baggages:-" ,"baggage cleared")
#         else:
#             print("Security check of count " ,No_of_passenger,"Passengers", No_of_baggage ,"baggages:-"  ,"baggage is not cleared")


# # Find sum of digit of number
# number=input("Enter the three digit number")
# The_number_is=abc
# Sum_of_number_is=a+b+c
# print (Sum_of_number_is)
# Python program to
# compute sum of digits in
# number.

# # Function to get sum of digits
# def getSum(n):
	
# 	sum = 0
# 	for digit in str(n):
#     sum += int(digit)	
# 	return sum

# n = 12345
# print(getSum(n))


#Flight captains and attendants do not require to check-in

#In case suspicious passengers are found, need to declare an emergency at the airport

# #For other passengers such as adults and children, need to proceed with normal security check
# for passenger in "A","FC","C","FA","SP","A","A":
#     if(passenger=="FC" or passenger=="FA"):
#         print("No check is required")
#         continue
#     if(passenger=="SP"):
#         print("Declare emergency in airport")
#         break
#     if(passenger=="A" or passenger=="C"):
#         print("Proceed with normal security check")
#         print("Check the person")
#         print("Check for cabin baggage")



#Write a Python function factorial(num) which returns the factorial of a given number
# import math
# def fact(n)
# return(math.factorial(n)
# num=int(input("Enter the no"))
# f=fact(num)
# print("Fact of a num is",f)


# import math
# def factorial(n):
# return 1 if (n==1 or n==0) else n*factorial(n-1)

# num = int(input("Enter the number:"))

# print("Factorial of", num, "is", factorial(num))


#Write a Python Function is_palindrome(num) that accepts an integer num as argument and returns True if the num is palindrome else returns false. 
# import math
# num=int(input("Enter the no."))
# rev=0
# temp=num
# while(num>0):
# digit =num % 10
# rev=rev*10 + digit
# num=num/10
# if (temp==rev):
#     print("The no is palindrome")
# else:
#     print("The no is not palindrome") 



#Write a program to check the given no is amicable or not.
# x=int(input("Enter no 1"))
# y=int(input("Enter no 2"))
# sum1=0
# sum2=0
# for i in range(1,x):
#     if x%i==0:
#         sum1+=i
# for j in range(1,y):
#     if y%j==0:
#         sum2+=j
# if (sum1== y and sum2==x):
#     print("Amicable")
# else:
#     print("Not Amicable")   


# alist=[1,20,4,4,4,50]
# i =0
# nextele=0
# temp=0

# while(i < len(alist)):
#   'print(alist[i])'
# temp = alist[i]
# nextele =alist[i+1]
# i=i+1

# import random
# x=10
# y=50
# print(random.randrange(x,y))

# fhr=open("data.txt","r")
# line1=fhr.readline()    
# print(line1,end="")
# line2=fhr.readline()    
# print(line2,end="")
# line3=fhr.readline()    
# # print(line3,end="")

# FHW=open("data.txt","w")
# FHW.write("written some thing")
# print(FHW.tell())
# print("closed?",FHW.closed)
# FHW.close()
# print("after closing the file closed?",FHW.closed)

# set_1={1,2,3,1,2,4,5,3,4,8,9,7,10}
# for index in range(len(set_1)):
#     print(index,end=" ")

# def value(num1):
#     list1=[]
#     while num1!=0:
#         if num1%2==0:
#             list1.append(num1)
#         else:
#             break
#         num1-=2
#     print(list1)
# value(10) 
 
#  def sample(value):
#     sum1=0
#     for i in value:
#         if i%2!=0:
#             sum1+=value[i]
#         else:
#             sum1-=i
#     print(sum1)
# dict1={1:2,2:4,3:6,5:8}
# sample(dict1)

import pygame as pg,sys
from pygame.locals import *
import time
#initialize global variables
XO = 'x'
winner = None
draw = False
width = 400
height = 400
white = (255, 255, 255)
line_color = (10,10,10)
#TicTacToe 3x3 board
TTT = [[None]*3,[None]*3,[None]*3]
 


