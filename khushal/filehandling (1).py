import os
try:
    while 1:
        print("FILE HANDLING MENU!")
        print("\n")
        print("0: create a file ")
        print("1: read a file ")
        print("2: write in file ")
        print("3: append in file ")
        print("4: renaming a file ")
        print("5: deleting a file ")
        print("6: copying a file ")
        print("7: encoding a file ")
        print("\n")
        print("Enter your choice")
        ch=int(input())
        if ch<0 and ch>7:
            print('CHOICE ENTER IS INVALID!')
   
       
        if ch==0:
            fname=input('enter name for file')
            f=open('C:\\Users\\HP\\Desktop\\'+fname+'.txt','wb+')
            print(f.read())
            f.close()

        if ch==1:
            fname=input('enter name for file')
            f=open('C:\\Users\\HP\\Desktop\\'+fname+'.txt','r')
            fo=f.read()
            print(fo)
            f.close()

        if ch==2:
            fname=input('enter name for file')
            f=open('C:\\Users\\HP\\Desktop\\'+fname+'.txt','w+')
            inpt=input("enter text to print in file!")
            f.write("\n")
            f.write(inpt)
            f.close()

        if ch==3:
            fname=input('enter name for file')
            f=open('C:\\Users\\HP\\Desktop\\'+fname+'.txt','a+')
            inpt=input("enter text to append in file!")
            f.write("\n")
            f.write(inpt)
            f.close()

        if ch==4:
            fname=("enter current file name")
            c_n='C:\\Users\\HP\\Desktop\\'+fname+'.txt'
            fnname=("enter current file name")
            n_n='C:\\Users\\HP\\Desktop\\'+fnname+'.txt'
            os.rename(c_n,n_n)
            print('file renamed from {} to {}'.format(c_n,n_n))
            f.close()

        if ch==5:
            f_name=input("enter file name you want to delete")
            n='C:\\Users\\HP\\Desktop\\'+f_name+'.txt'
            os.remove(n)
            print('file name {} deleted '.format(f_name))
            f.close()

        if ch==6:
            old=input("enter file name to copy content")
            no='C:\\Users\\HP\\Desktop\\'+old+'.txt'
            new=input("enter file name to copy content")
            nn='C:\\Users\\HP\\Desktop\\'+new+'.txt'
            with open(old) as f:
                with open(nn, 'w') as f1:
                    for line in f:
                        f1.write(line)
            f.close()

        if ch==7:
            en=input("enter file name to encode")
            ne='C:\\Users\\HP\\Desktop\\'+en+'.txt'
            f=open(ne,'w')
            print(f.encoding)
            f.close()
        else:
            print('ENTERED CHOICE IS INVALID!')
            userreply=input('do you want to continue (y,n)?')
            if userreply.lower()=='y':
                continue
            elif userreply.lower()=='n':
                break
           
   
       
except IOError:
    print('Error: can\'t find file or read data')
    
    
        


