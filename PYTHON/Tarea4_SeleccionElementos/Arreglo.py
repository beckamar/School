
class Arreglo:

    #def __init__(self, arre, arrePositivos, arreNegativos):
    arre = [-10,4,-3,1,3,-5,0,-20,7,9,-50,-43,20,10,15,-30,-25,-60]
    arrePositivos  = []
    arreNegativos =  []


    def recursividad(self, i):
        if i > 0 :
            if self.arre[i] >= 0:
                self.arrePositivos[i] = self.arre[i]
                self.recursividad(i-1)
                return self.arrePositivos
            else:
                self.arreNegativos[i] = self.arre[i]
                self.recursividad(i-1)
                return self.arreNegativos[i]

    def mostrarPos(self, i):
        if (i == 10):
            return
        print(self.arrePositivos[i])
        self.mostrarPos(i + 1)

    def mostrarNeg(self, i):
        if (i == 10):
            return
        print(self.arrePositivos[i])
        self.mostrarNeg(i + 1)



if __name__ == '__main__':

    a = Arreglo

    a.recursividad
    a.mostrarPos
    a.mostrarNeg
    


    

