# Program to Swap two Values using temp variable

def swap(x,y):
    print("Value of X is {} and Value of Y is {}".format(x,y))
    temp=x
    x=y
    y=temp
    display(x,y)

def Input():
    x=int(input("Enter The Value of X : "))
    y=int(input("Enter The Value of Y : "))
    swap(x,y)

def display(x,y):
    print("Now the value of X is {} and Value of Y is {}".format(x,y))

def main():
    Input()
    
    

if __name__=="__main__":
    main()