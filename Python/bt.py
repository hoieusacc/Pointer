from math import sqrt

def nhap():
    global a,b,c
    a = int(input('a='))
    b = int(input('b='))
    c = int(input('c='))

def giaipt(a, b, c):
    delta = b*b - 4*a*c
    if delta > 0:
        x1 = (-b + sqrt(delta))/ (2 * a)
        x2 = (-b - sqrt(delta))/ (2 * a)
        return (x1,x2)
    elif (delta == 0):
        x1 = x2 = -b/(2 * a)
        return (x1,x2)
    else:
        return "Phuong trinh vo nghiem"
    
def inkq(x):
    x1,x2 = x
    if x1 == x2:
        print("Phuong trinh co nghiem kep")
        print(f"x1=x2={x1}")
    elif x1 != x2:
        print("Phuong trinh co hai nghiem")
        print(f"x1={x1}")
        print(f"x2={x2}")
    else:
        print(x)

nhap()
inkq(giaipt(a,b,c))

        

