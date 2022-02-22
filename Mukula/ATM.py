import time
print("Please insert your CARD")
time.sleep(5)
password=1234
pin =int(input("Enter your ATM PIN "))
balance=5000
if pin==password:
 while True:
    print("""
        1 == balance
        2 == withdraw balance
        3 == deposite balance
        4 == exit
         """)
    try:
     option=int(input("Please enter your choice"))
    except:
        print("Please enter valid option")
    if option==1:
        print("Your updated balance is"+str(balance)+"")
    if option==2:
        withdraw_amount=int(input("Please enter withdraw amount"))
        balance=balance=withdraw_amount
        print(""+str(withdraw_amount)+" is debited from your account")
        print("your updated balance is"+str(balance)+"")
    if option==3:
        deposite_amount=int(input("Please enter deposite_amount"))
        balance=balance+deposite_amount
        print(""+deposite_amount+" is credited to your account")
        print("Your updated balance is"+str(balance)+"")
    if option == 4:
        break
    else:
        print("Wrong pin please try again")
    
