def nhap():
    global n
    n = int(input("n="))

def inkq(n):
    for i in range (2,n+1,2):
        print(i, end = " ")
    print()


while True:
    nhap()
    inkq(n)
    choice = input("Tiep tuc khong?")
    if choice == "k" and choice != "K":
        break


