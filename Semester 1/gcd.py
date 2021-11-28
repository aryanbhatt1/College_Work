def gcd(n,m):
    while True:
        r=n%m
        n=m
        m=r
        if r==0:
            break
    print(n)
n=int(input("Enter first number"))
m=int(input("enter second number"))
gcd(n,m)