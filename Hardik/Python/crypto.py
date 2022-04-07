#with open('photo.jpg','ab') as f:
#    f.write(b"Hello World")

with open('photo.jpg','rb') as f:
    content = f.read()
    offset = content.index(bytes.fromhex('FFD9'))

    f.seek(offset + 2)
    print(f.read())