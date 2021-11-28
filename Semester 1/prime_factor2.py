def prime_factor(lower,upper):
    for number in range(lower,upper+1):
        if number>1:
            for j in range(2,number):
                if number%j==0:
                    break
            else:
                print(number)
lower=int(input("Enter lower number"))
upper=int(input("Enter upper number"))
prime_factor(lower,upper)