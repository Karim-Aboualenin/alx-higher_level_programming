#!/usr/bin/python3
if __name__ == "__main__":
    import sys
    argc = len(sys.argv)
    if argc == 1:
        print("0 arguments.")
    else:
        print("{} argument:".format(argc - 1))
        i = 1
        while i  < argc:
            print("{}: {}".format(i, sys.argv[i]))
            i = i + 1
