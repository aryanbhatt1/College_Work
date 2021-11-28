def reversing_number(number):
    rev=0
    while number>0:
        remainder=number%10
        rev=(rev*10)+remainder
        number=int(number/10)
    print(rev)
number=int(input("Enter the number :"))
reversing_number(number)