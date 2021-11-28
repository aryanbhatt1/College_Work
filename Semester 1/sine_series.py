def sine(x):
    error=0.0000001
    pi=22/7
    y=x*(pi/180)
    term=y
    sint=term
    j=1
    x2=y*y
    while abs(term)>error:
        j=j+2
        term=-term*x2/(j*(j-1))
        sint=sint+term
    sin=sint
    print(round(sin,2))
x=int(input("Enter the degree :"))
sine(x)