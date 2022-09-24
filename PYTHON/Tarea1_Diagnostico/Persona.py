
class Persona:

    def __init__ (self, edad, genero):
        self.edad = edad
        self.genero = genero


def operation():
    menores25 = 0
    fem = 0
    masc = 0

    for i in range(3):

        print("Persona ", i+1)
        genero = input("Sexo: (m: Masculino f: femenino) ")
        edad = int(input("Edad: "))
        persona = Persona(edad, genero)

        if persona.edad < 25:
            menores25 += 1  
             
        if persona.genero == 'f':
            fem += 1 
                
        if (persona.genero == 'm') and (persona.edad > 18 and persona.edad<25):
            masc += 1
                
    total25 = (menores25*100) / 3
    totalfem = (fem*100) /  3
    totalmasc = (masc*100) /3
    print("Menores de 25 años: ",round(total25, 2), "%") 
    print("Sexo femenino: ",round(totalfem, 2), "%")
    print("Sexo masculino con edades comprendidas entre 18 y 25: ",round(totalmasc, 2), "%")


    
if __name__ == '__main__':

    operation()







