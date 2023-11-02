#!/usr/bin/python3
if __name__ == "__main__":
    import sys
    argc = len(sys.argv)
    result = 0
    if argc == 1:
        result = 0
    else:
        for i in range(1, argc):
            result += int(sys.argv[i])
    print("{}".format(result))
