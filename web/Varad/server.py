import socket

s = socket.socket()
s.bind(('localhost',2301))
s.listen(4)

clientobject,add=s.accept()
print('connected with this address',add)

conn=True
while conn:
    gotmsg=clientobject.recv(1024)
    gotmsg.decode('utf-8')
    print(gotmsg)
    if len(gotmsg)==0:
        conn=False
        
    msg=input("Enter the msg  :- ")   
    clientobject.send(msg.encode('utf-8'))
    if msg=='no':
            conn=False
            s.close()
        
        