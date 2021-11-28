def fibonacci_series(number):
    a=0
    b=1
    i=1
    while i<number:
        print(a,b,end=" ")
        a=a+b
        b=a+b
        i=i+2
    if i==number:
        print(a)
number=int(input("Enter the number :"))
fibonacci_series(number)