#!/usr/bin/python3
def remove_char_at(str, n):
    string = ""
    i = 0
    for c in (str):
        if i != n:
            string += c
        i += 1
    return string     
