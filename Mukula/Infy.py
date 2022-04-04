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

#For other passengers such as adults and children, need to proceed with normal security check
for passenger in "A","FC","C","FA","SP","A","A":
    if(passenger=="FC" or passenger=="FA"):
        print("No check is required")
        continue
    if(passenger=="SP"):
        print("Declare emergency in airport")
        break
    if(passenger=="A" or passenger=="C"):
        print("Proceed with normal security check")
        print("Check the person")
        print("Check for cabin baggage")
