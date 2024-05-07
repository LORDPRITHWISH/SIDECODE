import numpy as np

class piece:
    total = 0
    def __init__(self,val):
        self.value = abs(val)
        self.side = val//self.value
        self.moved = False
        piece.total += 1

a=[piece(1),piece(2),piece(3),piece(-1),piece(-2),piece(-3)]

nparray = np.array(a)

print(nparray[0].value)