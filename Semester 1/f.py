ch,sch=9,90
if ch<=9:
    s=[2,2]
    print(ch)
    for x in range(1,3):
        for y in range(1,3):
            if y==0:
                s=['A']
            else:
                s=['B']
print(s)