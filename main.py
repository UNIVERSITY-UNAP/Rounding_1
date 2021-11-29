suma = 1
for i in range(0,100):
    total = 0
    for j in range(0,100):
        total = total + 0.00001
    suma = suma + total
print(suma)