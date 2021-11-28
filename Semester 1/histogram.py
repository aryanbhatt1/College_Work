# Program to create histogram array

def histogram(items):
    for n in items:
        output=''
        times=n
        while (times>0):
            output+="*"
            times-=1
        print(n, output)

size=int(input("Enter the size of the list :"))
items=[]
for i in range(0,size):
    value=int(input("Enter value "+str(i)+" :"))
    items.append(value)
histogram(items)