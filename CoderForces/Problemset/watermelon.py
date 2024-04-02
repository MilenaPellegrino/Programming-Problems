
# Número de entrada
numW = int(input())

# Números del 1 al 100
x = 1
Nums = []
while x <= 100:
    Nums.append(x)
    x += 1

# Números pares
Nums_pares = []
for i in Nums:
    if i % 2 == 0:
        Nums_pares.append(i)

division = []

for i in Nums:
    division.append(i / numW)

for i in division:
  if i == Nums_pares:
    print("Si")