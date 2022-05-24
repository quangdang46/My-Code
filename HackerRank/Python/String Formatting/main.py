def print_formatted(number):
    width = len("{0:b}".format(number))
    for i in range(1, number+1):
        print("{i:{width}d} {i:{width}o} {i:{width}X} {i:{width}b}".format(i=i, width=width))
if __name__ == '__main__':
    n = int(input())
    print_formatted(n)