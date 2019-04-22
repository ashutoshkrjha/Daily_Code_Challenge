def factorial(n):
    if (n == 0):
        print("Reached Base Case\n")
        return 1
    else:
        print("Recursive call: Calculating Factorial by doing " + str(n) +
              "x" + str(n - 1) + "!")
        return n * factorial(n - 1)


def main():

    n = input("Give me a number: ")
    n = int(n)

    print("Calculating the factorial of " + str(n))
    print("The factorial of " + str(n) + " is " + str(factorial(n)))


if __name__ == '__main__':
    main()
