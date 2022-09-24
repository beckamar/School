
if __name__ == '__main__':
    
    sum = 0
    par = 0
    impar = 0

    list_n = []

    rows = int(input("Cantidad de valores: "))

    for i in range(rows):
        print(i,". ")
        list_n.append()

        if list_n[i] > 1 or list_n[i] < 1000:
            i-1
            continue

        sum += list_n[i]

        if list_n[i] % 2 == 0:
            par += 1
        else:
            impar += 1
    print (sum)
    print(par)
    print(impar)
