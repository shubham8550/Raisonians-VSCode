def checksum(msg):
  s = 0
  # loop taking 2 characters at a time
  for i in range(0, len(msg), 2):
    w = ord(msg[i]) + (ord(msg[i+1]) << 8 )
    s = s + w

    s = (s>>16) + (s & 0xffff);
    s = s + (s >> 16);

    #complement and mask to 4 byte short
    s = ~s & 0xffff

    return s