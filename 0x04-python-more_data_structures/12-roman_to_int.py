#!/usr/bin/python3
def roman_to_int(roman_string):
    if not isinstance(roman_string, str) or roman_string is None:
        return 0
    a_dict = {"I": 1, "V": 5, "X": 10, "L": 50, "C": 100, "D": 500, "M": 1000}
    sum = 0
    pre = 0
    for i in roman_string:
        sum += a_dict[i] if a_dict[i] <= pre else a_dict[i] - pre * 2
        pre = a_dict[i]
    return sum
