def prime_series(n):
    prime=[]
    k=1
    j=1
    for i in range(n):
        prime.append(k)
    prime.pop(0)
    prime.insert(0,0)
    prime.pop(1)
    prime.insert(1,0)
    for i in range(2,n+1):
        if 1 in prime:
            j=2
            while ((i*j)<n):
                prime[i*j]=0
                j+=1
    for k in range(2,n):
        y=prime[k]
        if y==1:
            print(k)

n=int(input("Enter the number"))
prime_series(n)
