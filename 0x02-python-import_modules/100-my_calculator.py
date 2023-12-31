#!/usr/bin/python3
if __name__ == "__main__":
    from calculator_1 import add, sub, mul, div
    from sys import argv
    argc = len(argv)
    if argc != 4:
        print("Usage:", argv[0], "<a> <operator> <b>")
        exit(1)

    op = argv[2]
    f = {"+": add, "-": sub, "*": mul, "/": div}
    if op not in f:
        print("Unknown operator. Available operators: +, -, * and /")
        exit(1)

    a = int(argv[1])
    b = int(argv[3])
    print("{:d} {:s} {:d} = {:d}".format(a, op, b, f[op](a, b)))
