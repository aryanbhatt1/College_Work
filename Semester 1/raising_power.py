def raising_power(base,pow1):
    pro=1
    seq=base
    while pow1>0:
        if int(pow1%2==1):
            pro=pro*seq
            seq=seq*seq
            pow1=int(pow1/2)
    print(pro)

base=int(input("Enter the base :"))
pow1=int(input("Enter the power :"))
raising_power(base,pow1)