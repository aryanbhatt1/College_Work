# Program to swap two values without using temp variable

def swap(x,y):
    print("Value of X is {} and Value of Y is {}".format(x,y))
    x=x+y
    y=x-y
    x=x-y
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