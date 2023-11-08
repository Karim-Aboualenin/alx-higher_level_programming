#!/usr/bin/python3
def multiply_by_2(a_dictionary):
    new_dir = a_dictionary.copy()
    for key, values in a_dictionary.items():
        new_value = values * 2
        new = {key: new_value}
        new_dir.update(new)
    return new_dir
