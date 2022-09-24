def Potencia(base, exponente):
    if exponente == 0:
        return 1
    else:
        total = base * Potencia(base, exponente-1)
        return total


if __name__ == "__main__":

    base = int(input("Base: "))
    exponente = int(input("Exponente: "))
    print("Resultado: ",Potencia(base, exponente))

