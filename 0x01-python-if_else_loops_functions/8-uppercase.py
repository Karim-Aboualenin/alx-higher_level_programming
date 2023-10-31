#!/usr/bin/python3
def uppercase(str):
    string = ""
    for c in (str):
        if ord(c) >= ord('a') and ord(c) <= ord('z'):
            string += chr(ord(c) - 32)
        else:
            string += c
    print("{:s}".format(string))
