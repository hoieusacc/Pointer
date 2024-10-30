a=[]
soam = 0
soduong = 0

while 0 not in a:
    a.append(int(input("nhap so:")))
a.pop()

for i in a:
    if i > 0:
        soduong += 1
    else:
        soam += 1

print(f"day tren co {soduong} so duong")
print(f"day tren co {soam} so so am")

    