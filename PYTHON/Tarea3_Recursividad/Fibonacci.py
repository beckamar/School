
def fibonacci(num):
    if num == 0 or num ==1:
        return 1
    else:
        return fibonacci(num-1) + fibonacci(num-2)




if __name__ == "__main__":
    num = 1

    print("\nFIBONACCI ")
    while num < 9:
        print(fibonacci(num))
        num += 1
    







