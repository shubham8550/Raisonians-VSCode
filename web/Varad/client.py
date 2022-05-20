import socket
s = socket.socket()
s.connect(('localhost',2301))
conn=True
while conn:
    msg=input("Enter the msg :- ")
    s.send(msg.encode('utf-8'))
    if msg=='no':
        conn=False
        
    gotmsg=s.recv(1024)
    gotmsg.decode('utf-8')
    print(gotmsg)
    if len(gotmsg)==0:
        conn=False
        s.close()