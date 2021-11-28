def duplication(list,list2):
    for number in list:
        if number not in list2:
            list2.append(number)
    print(list2)

list=[]
list2=[]
size=int(input("Enter size :"))
for value in range(0,size):
    num=int(input("Enter value"))
    list.append(num)
print(list)
duplication(list,list2)